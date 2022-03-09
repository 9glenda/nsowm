#include "patches.h"
#include <X11/Xlib.h>

#if WINDOWS_PATCH
#define NUM_WS 10
#endif
#define win (client *t = 0, *c = list; c && t != list->prev; t = c, c = c->next)
#define ws_save(W) ws_list[W] = list
#define ws_sel(W) list = ws_list[ws = W]
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define win_size(W, gx, gy, gw, gh)                                            \
  XGetGeometry(dpy, W, &(Window){0}, gx, gy, gw, gh, &(unsigned int){0},       \
               &(unsigned int){0})

// Taken from DWM. Many thanks. https://git.suckless.org/dwm
#define mod_clean(mask)                                                        \
  (mask & ~(numlock | LockMask) &                                              \
   (ShiftMask | ControlMask | Mod1Mask | Mod2Mask | Mod3Mask | Mod4Mask |      \
    Mod5Mask))

typedef struct {
  const char **com;
  const int i;
  const Window w;
} Arg;

struct key {
  unsigned int mod;
  KeySym keysym;
  void (*function)(const Arg arg);
  const Arg arg;
};

typedef struct client {
  struct client *next, *prev;
  int f, wx, wy;
  unsigned int ww, wh;
#if TITLEBAR_PATCH
  Window w, t;
#else
  Window w;
#endif
} client;
#if BORDER_PATCH
unsigned long getcolor(const char *col);
#endif
void button_press(XEvent *e);
void button_release(XEvent *e);
void configure_request(XEvent *e);
void input_grab(Window root);
void key_press(XEvent *e);
void map_request(XEvent *e);
void mapping_notify(XEvent *e);
void notify_destroy(XEvent *e);
void notify_enter(XEvent *e);
void notify_motion(XEvent *e);
void run(const Arg arg);
void win_add(Window w);
void win_center(const Arg arg);
void win_del(Window w);
void win_fs(const Arg arg);
void win_focus(client *c);
void win_kill(const Arg arg);
void win_prev(const Arg arg);
void win_next(const Arg arg);
void win_to_ws(const Arg arg);
void ws_go(const Arg arg);
#if WINDOWS_PATCH
bool exists_win(Window w);
#endif
#if LAST_WS_PATCH
void last_ws_go(const Arg arg);
#endif
#if NEXT_WS_PATCH
void ws_go_add(const Arg arg);
#endif
void quit(const Arg arg);
#if ROUNDED_CORNERS_PATCH
void win_round_corners(Window w, int rad);
#endif
#if AUTOSTART_PATCH
void auto_start(void);
#endif
#if RESIZE_PATCH
void win_move(const Arg arg);
#endif
#if SPLIT_PATCH
void split_win(const Arg arg);
#endif
#if TITLEBAR_PATCH
void title_add(client *c);
void title_del(client *c);
#endif
#if RESIZEFULLSCREEN_PATCH
void win_resize_fullscreen(const Arg arg);
#endif
#if BARFS_PATCH
void creat_dir();
void fs_true();
void fs_false();
#endif
#if EXISTING_CLIENTS_PATCH
void win_init(void);
#endif

static int xerror() { return 0; }
