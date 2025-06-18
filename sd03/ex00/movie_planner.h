#include <stddef.h>

// Returns user preferences. Returns NULL on failure.
struct Preferences *get_user_preferences(void);
// Returns a list of movies matching the given preferences. Returns NULL on failure.
struct MovieList *find_movies(struct Preferences *prefs);
// Returns a movie night plan from the given list. Returns NULL on failure.
struct Plan *build_plan(struct MovieList *list);
