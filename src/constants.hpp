#ifndef __CONSTANTS_HPP_INCLUDED__
#define __CONSTANTS_HPP_INCLUDED__

#include <string>

namespace radiostation
{
const long kDefaultHTTPRequestTimeout = 5 * 1000;
const int kDefaultGStreamerBufferSize = 1024 * 100;

const char* const kRadioStationAppDirName = "radiostation";
const char* const kAppDirName = "radiostation";
const char* const kBookmarksFileName = "bookmarks.xml";
const char* const kConfigFileName = "config.xml";

// Images
const char* const kImagePath = INSTALL_PREFIX "/share/radiostation/images/";

const char* const kAppIcon = "radiostation.png";
const char* const kAppIconOn = "radiostation_on.png";
const char* const kAppIconOff = "radiostation_off.png";
const char* const kAppIconConnecting = "radiostation_connecting.gif";

const char* const kAppIndicatorIconOn = "radiostation_on";
const char* const kAppIndicatorIconOff = "radiostation_off";
const char* const kAppIndicatorIconConnecting = "radiostation_connecting";

// Application info
const char* const kAppVersion = APP_VERSION;
const char* const kAppName = "RadioStation";
const char* const kWebSite = "https://github.com/sparkylinux/radiostation";
const char* const kAuthor = "Paweł Pijanowski <pavroo@onet.eu>";
const char* const kCopyrightYear = "2020";
const char* const kCopyrightTmpl = "%s - Copyright (c) %s\n %s";

} // namespace radiostation

#endif
