#include "workout_scheduler.h"

struct WorkoutPlan *create_workout_schedule(char *username)
{
	struct UserData		*userdata;
	struct WorkoutPlan	*plan;
	int					days;
	int					i;

	userdata = get_user_data(username);
	plan = build_base_plan(userdata);
	plan = refine_plan(plan, userdata);
	days = determine_duration(plan);
	i = 0;
	while (i < days)
	{
		assign_daily_exercises(plan, days);
		assign_daily_tips(plan, days);
	}
	return (plan);
}
