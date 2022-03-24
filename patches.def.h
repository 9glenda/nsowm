// diff/rounded_corners.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/58.patch
// rounded corners for windows
#define ROUNDED_CORNERS_MODULE 0

// diff/autostart.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/106.patch
// autostart
#define AUTOSTART_MODULE 0

// diff/resize.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/59.patch
// Move window with mod + h,j,k,l
// Resize window with mod|shift + h,j,k,l
#define RESIZE_MODULE 0

// diff/split.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/76.patch
// split windows
#define SPLIT_MODULE 0

// diff/title.diff
// https://github.com/dylanaraps/sowm/pull/57
// white title bar (pointless)
#define TITLEBAR_MODULE 0

// diff/normalkill.diff
// https://raw.githubusercontent.com/dylanaraps/sowm-patches/master/patches/sowm-normal-kill.patch
// In some cases all windows of a programm get cilled if you try to kill one
// without this patch
#define NORMALKILL_MODULE 1

// diff/fixedborders.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/91.patch
// add a boreder around windows
// BUGS:
// doesn't work with ROUNDED_CORNERS_MODULE (just won't be visable but sometimes
// it is)
#define BORDER_MODULE 1

// diff/windows.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/88.patch
// Force windows to be unique among all workspaces
// This is intended to correct issue #44 where opening a browser window in
// another workspace when a browser window is already open causes incorrect
// behavior.
// In order to correct the problem, a function exists_win was added to prevent
// duplicate windows being inserted into other workspaces. A global macro
// constant NUM_WS was also required to ensure proper bounds in exists_win.
#define WINDOWS_MODULE 0

/// diff/2bswm-style.diff
// https://github.com/dylanaraps/sowm-patches/blob/master/patches/sowm-2bswm-style.patch%7E087e2767361e60a143b3f00cbe7a7486b032af4a
// I don't know
//#define 2BSWM_STYLE_MODULE 1

// no diff
// no url
// switch to last workspace
#define LAST_WS_MODULE 0

// no diff
// no url
// switch to next or previous workspace
#define NEXT_WS_MODULE 0

// diff/existing_clients.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/64.patch
// https://github.com/dylanaraps/sowm/pull/64
// Manages clients which exist prior to sowm.
#define EXISTING_CLIENTS_MODULE 0

// no diff
// no url
// restarting nsowm
// .xinitrc
// true
// while [ $? -eq 0 ]; do
// exec nsowm
// done
#define RESTARTING_MODULE 0

// no diff
// no url
// barfs
#define BARFS_MODULE 1

// no diff
// no url
// Better bar support
#define FIXBAR_MODULE 1

// no diff
// no url
// just sets the name of teh windowmanager
#define ICCCM_MODULE 1

// no diff
// no url
// Mod + Shift + f resize windo to fullscreen without making it fullscreen
#define RESIZEFULLSCREEN_MODULE 1

