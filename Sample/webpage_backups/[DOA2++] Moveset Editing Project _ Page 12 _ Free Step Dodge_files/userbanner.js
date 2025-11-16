/** @param {jQuery} $ jQuery Object */
!function ($, document) {
    "use strict";

    var steamUserBanner = {
        init: function () {
            if (XF.getApp() === 'admin' && $('.steam-user-banner').length === 0) {
                return window.setTimeout(function () {
                    steamUserBanner.init();
                }, 500);
            }

            var steamIds = steamUserBanner.getSteamIds();

            if (steamIds.length) {
                steamUserBanner.getSteamProfiles(steamIds, function (steamProfiles) {
                    steamUserBanner.render(steamProfiles);
                });
            }
        },
        getSteamIds: function () {
            var steamIds = [];

            $('.steam-user-banner:empty').each(function () {
                var el = $(this);
                var steamId = el.data('steamid');

                if (steamIds.indexOf(steamId) === -1) {
                    steamIds.push(steamId);
                }
            });

            return steamIds;
        },
        getSteamProfiles: function (steamIds, callback) {
            var url = XF.getApp() === 'admin' ?
                XF.canonicalizeUrl('admin.php?steam/getsummaries/') :
                XF.canonicalizeUrl('index.php?steam/getsummaries/');

            url = url + steamIds.join('-') + '/';

            XF.ajax('get', url, function (response) {
                if (response.profiles.length) {
                    callback(response.profiles);
                }
            });
        },
        render: function (steamProfiles) {
            $.each(steamProfiles, function () {
                var steamProfile = this;
                var steamId = steamProfile.steamid;

                $('.steam-user-banner:empty[data-steamid="' + steamId + '"]').each(function () {
                    var parent = $(this);

                    parent.addClass('visibility-' + steamProfile.personastate);

                    parent.append('<div class="image-container"><img class="image" src="' + steamProfile.avatar + '" /></div>');
                    parent.append('' +
                        '<div class="info-container">' +
                        '   <div class="name">' + steamProfile.personaname + '</div>' +
                        '   <div class="visibility">' + steamProfile.personavisibility + '</div>' +
                        '</div>')
                });
            });
        }
    };

    $(document).ready(function () {
        steamUserBanner.init();
    });
}(jQuery, document);