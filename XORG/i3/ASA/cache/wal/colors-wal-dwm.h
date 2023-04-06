static const char norm_fg[] = "#e5e5e8";
static const char norm_bg[] = "#0a0a0d";
static const char norm_border[] = "#a0a0a2";

static const char sel_fg[] = "#e5e5e8";
static const char sel_bg[] = "#91837D";
static const char sel_border[] = "#e5e5e8";

static const char urg_fg[] = "#e5e5e8";
static const char urg_bg[] = "#92696B";
static const char urg_border[] = "#92696B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
