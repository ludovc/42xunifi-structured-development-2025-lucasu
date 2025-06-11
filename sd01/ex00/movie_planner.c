struct Plan *create_movie_night_plan(void)
{
	while (users)
	{
		new_movies = find_movies(get_user_preferences());
		join_movies(new_movies, movies);
	}
	return (build_plan(movies));
}
