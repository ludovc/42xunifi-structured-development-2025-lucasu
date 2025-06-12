#include "movie_planner.h"

struct Plan *create_movie_night_plan(void)
{
	struct Preferences	*prefs;
	struct MovieList	*list;

	prefs = get_user_preferences();
	if (!prefs)
		return (NULL);
	list = find_movies(prefs);
	if (!list)
		return (NULL);
	return (build_plan(list));
}
