#include "patches.h"

#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod1Mask

#if ROUNDED_CORNERS_PATCH // ROUNDED_CORNERS_PATCH
#define ROUND_CORNERS 3
#endif // ROUNDED_CORNERS_PATCH
// window borders patch
#define BORDER_SELECT   "#880000"
#define BORDER_NORMAL   "#333333"
#define BORDER_NONE     "#000000"
#define BORDER_WIDTH    10 //shadow

#if BAR_PATCH
#define GAP_SIZE 10
const char* barname = "bar" // for lemonbar
#endif

#if TITLE_PATCH
#define TH  90
#define TC  255 + (255<<8) + (255<<16)
#endif

const char* menu[]    = {"dmenu_run",      0};
const char* term[]    = {"alacritty",      0};
const char* scrot[]   = {"scrot",            0};
const char* briup[]   = {"bri", "10", "+", 0};
const char* bridown[] = {"bri", "10", "-", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* colors[]  = {"bud", "/home/goldie/Pictures/Wallpapers", 0};

static struct key keys[] = {
    {MOD|ShiftMask,  XK_c,   win_kill,   {0}},
    {MOD,            XK_c,   win_center, {0}},
    {MOD,            XK_f,   win_fs,     {0}},
    {MOD|ShiftMask,  XK_q,   quit,       {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD,           XK_p,      run, {.com = menu}},
    {MOD,           XK_w,      run, {.com = colors}},
    {MOD,           XK_d,      run, {.com = scrot}},
    {MOD|ShiftMask, XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    #if RESIZE_PATCH
    {MOD,           XK_k,  win_move,  {.com = (const char*[]){"move",   "n"}, .i = 10}},
    {MOD,           XK_j,  win_move,  {.com = (const char*[]){"move",   "s"}, .i = 10}},
    {MOD,           XK_l,  win_move,  {.com = (const char*[]){"move",   "e"}, .i = 10}},
    {MOD,           XK_h,  win_move,  {.com = (const char*[]){"move",   "w"}, .i = 10}},

    {MOD|ShiftMask, XK_k,  win_move,  {.com = (const char*[]){"resize", "n"}, .i = 10}},
    {MOD|ShiftMask, XK_j,  win_move,  {.com = (const char*[]){"resize", "s"}, .i = 10}},
    {MOD|ShiftMask, XK_l,  win_move,  {.com = (const char*[]){"resize", "e"}, .i = 10}},
    {MOD|ShiftMask, XK_h,  win_move,  {.com = (const char*[]){"resize", "w"}, .i = 10}},
    #endif

    #if SPLIT_PATCH
    {MOD|ControlMask,  XK_k,  split_win,  {.com = (const char*[]){"n"}}},
    {MOD|ControlMask,  XK_j,  split_win,  {.com = (const char*[]){"s"}}},
    {MOD|ControlMask,  XK_l,  split_win,  {.com = (const char*[]){"e"}}},
    {MOD|ControlMask,  XK_h,  split_win,  {.com = (const char*[]){"w"}}},
    #endif

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif
