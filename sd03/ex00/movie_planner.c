#include "movie_planner.h"

struct Plan	*create_movie_night_plan(void)
{
	struct Preferences	*prefs;
	struct MovieList	*list;
	struct Plan			*plan;

	prefs = get_user_preferences();
	if (!prefs)
		return (NULL);
	list = find_movies(prefs);
	if (!list)
		return (NULL);
	plan = build_plan(list);
	if (!plan)
		return (NULL);
	return (plan);
}
