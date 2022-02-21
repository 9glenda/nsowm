// diff/rounded_corners.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/58.patch
// rounded corners for windows
#define ROUNDED_CORNERS_PATCH 1

// diff/autostart.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/106.patch
// autostart
#define AUTOSTART_PATCH 1

// diff/resize.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/59.patch
// Move window with mod + h,j,k,l
// Resize window with mod|shift + h,j,k,l
#define RESIZE_PATCH 1

// diff/split.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/76.patch
// split windows
#define SPLIT_PATCH 1

// diff/title.diff
// https://github.com/dylanaraps/sowm/pull/57
// white title bar (pointless)
#define TITLE_PATCH 0

// diff/normalkill.diff
// https://raw.githubusercontent.com/dylanaraps/sowm-patches/master/patches/sowm-normal-kill.patch
// In some cases all windows of a programm get cilled if you try to kill one without this patch
#define NORMALKILL_PATCH 1

// diff/fixedborders.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/91.patch
// add a boreder around windows
// BUGS:
// doesn't work with ROUNDED_CORNERS_PATCH (just won't be visable but sometimes it is)
#define BORDER_PATCH 0

// diff/windows.diff
// https://patch-diff.githubusercontent.com/raw/dylanaraps/sowm/pull/88.patch
// Force windows to be unique among all workspaces
// This is intended to correct issue #44 where opening a browser window in
// another workspace when a browser window is already open causes incorrect
// behavior.
// In order to correct the problem, a function exists_win was added to prevent
// duplicate windows being inserted into other workspaces. A global macro
// constant NUM_WS was also required to ensure proper bounds in exists_win.
#define WINDOWS_PATCH 1
