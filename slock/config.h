/* user and group to drop privileges to */
static const char *user  = "lars";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#212121",   /* during input */
	[FAILED] = "black",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
