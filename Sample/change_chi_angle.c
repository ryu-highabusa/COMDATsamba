n;							/* Amount of change due to restitution force */
INT tmp_int;					/* General working variable (int) */


if (chi_stop_flg[ply_no] == OFF) {			/* When stop flag is clear */
    move = get_del_point_move(chi_dat_p);	/* Change amount due to parent's movement */
    gravi = get_gravi_point(chi_dat_p);		/* Change amount due to gravity */
}
else {										/* When stop flag is set */
    move = 0.0;								/* Ignore parent's movement and gravity */
    gravi = 0;								
}

if (chi_dat_p->del_point_bk > 0) {			/* When the breast is advancing */
    tmp_int = get_gen_point(chi_dat_p);		/* Change amount due to natural deceleration */

    switch (chi_stop_flg[ply_no]) {			/* External force stop processing */
        case 1:								/* Normal stop */
        case 2: {							/* Level 2 */
            tmp_int <<= 1;					/* Double the deceleration value */
            break;
        }
        case 3: {							/* Level 3 */
            tmp_int += (tmp_int >> 1);		/* Increase deceleration value by 1.5 times */
            break;
        }
        case 4: {							/* Level 4 */
            tmp_int += (tmp_int << 1);		/* Triple the deceleration value */
            break;
        }
        default: {
            break;
        }
    }

    chi_dat_p->del_point = chi_dat_p->del_point_bk
                            + move			/* Include change amount due to movement */
                            + gravi			/* Gravity change amount */
                            - tmp_int;		/* Include natural deceleration */
}
else {										/* When the breast is retracting */
    tmp_int = get_recon_point(chi_dat_p);	/* Change amount due to restitution force */

    switch (chi_stop_flg[ply_no]) {			/* External force stop processing */
        case 2: 							/* Level 2 */
        case 3: {							/* Level 3 */
            tmp_int = (tmp_int >> 2)		/* Reduce restitution force to 3/4 */
                        + (tmp_int >> 1);	/* 							*/
            break;
        }
        case 4: {							/* Level 4 */
            tmp_int = tmp_int >> 2;			/* Reduce restitution force to 1/4 */
            break;
        }
        default: {
            break;
        }
    }

    chi_dat_p->del_point = chi_dat_p->del_point_bk
                            + move			/* Include change amount due to movement */
                            + gravi			/* Gravity change amount */
                            - tmp_int;		/* Include restitution force */
}

if (chi_dat_p->del_point > CHI_DEL_MAX_LIM)
    chi_dat_p->del_point = CHI_DEL_MAX_LIM;	/* Limit point change amount */
else if (chi_dat_p->del_point < -CHI_DEL_MAX_LIM)
    chi_dat_p->del_point = -CHI_DEL_MAX_LIM;	/* 							*/

chi_dat_p->del_point_bk = chi_dat_p->del_point;

if ((chi_dat_p->obj_point + chi_dat_p->del_point) > MAX_POINT) {
    /* If adding the calculated change amount to the point would exceed the limit */
    /* Tell the next frame to clear the change amount */
    chi_dat_p->del_point_bk = 0;
}

}/*** get_chi_point() ***/


/******************************************************/
/***                                                ***/
/***    Function: Change in movement angle during nu-***/
/***           tral                                   ***/
/***                                                ***/
/***    Date created: H8.3.2                         ***/
/***    Created by: JUN                               ***/
/***                                                ***/
/***    Prototype: void change_chi_angle(            ***/
/***                    struct chi_dat               ***/
/***                        *chi_dat_p               ***/
/***                );                              ***/
/***    Arguments: Breast data pointer              ***/
/***    Return value: Nothing                        ***/
/***                                                ***/
/******************************************************/

void change_chi_angle(
        struct chi_dat *chi_dat_p
    )
{

    long *move_ang_p;           /* Current movement angle data pointer */


    move_ang_p = &chi_dat_p->move_angle;
    if (chi_dat_p->del_point == 0) {
        *move_ang_p = chi_dat_p->vec_angle;    /* When stopped, parent's movement */
        *move_ang_p &= 0xC000;                  /* remains unchanged */
    }
    else {
        *move_ang_p += 0x8000;                  /* Movement direction +180 degrees */
        *move_ang_p &= 0xC000;                  /*                               */
    }

}/* change_chi_angle */


/******************************************************/
/***                                                ***/
/***    Function: Calculation of breast object       ***/
/***    Date created: H8.3.1                         ***/
/***                                                ***/
/***    Created by: JUN                               ***/
/***                                                ***/
/***    Prototype: void get_chi_obj_no(             ***/
/***                    struct chi_dat              ***/
/***                        *chi_dat_p               ***/
/***                );                              ***/
/***    Arguments: Breast data pointer              ***/
/***    Return value: Nothing                        ***/
/***                                                ***/
/******************************************************/

void get_chi_obj_no(
        struct chi_dat *chi_dat_p
    )
{

    long *move_ang_p;           /* Current movement angle data pointer */


    move_ang_p = &chi_dat_p->move_angle;
    if (*move_ang_p >= 0xC000)
        chi_dat_p->obj_no = CHI_OBJECT2;      /* Update object number for each */
    else                                      /* direction of movement */
        chi_dat_p->obj_no = CHI_OBJECT1;

}/* get_chi_obj_no */
