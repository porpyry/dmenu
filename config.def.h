static int topbar = 1; /* -b option; if 0, dmenu appears at bottom */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=12"
};
static const char *prompt = NULL; /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	[SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeSel] =  { "#f8f8f2", "#6272a4" },
	[SchemeOut] =  { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 26;
static unsigned int min_lineheight = 26;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
