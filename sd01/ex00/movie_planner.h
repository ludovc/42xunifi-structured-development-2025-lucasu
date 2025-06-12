#include <stddef.h>

struct Preferences
{
	int		something;
};

struct MovieList
{
	int		something;
};

struct Plan
{
	int		something;
};

struct Preferences *get_user_preferences(void);
struct MovieList *find_movies(struct Preferences *prefs);
struct Plan *build_plan(struct MovieList *list);
