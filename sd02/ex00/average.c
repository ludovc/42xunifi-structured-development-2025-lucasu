int	is_valid(int number)
{
	return (number >= 0 && number <= 100);
}

float	average(const int *arr, int size)
{
	float	res;
	int		n_valid;
	int		i;

	res = 0;
	n_valid = 0;
	i = 0;
	while (i < size)
	{
		if (is_valid(arr[i]))
		{
			res += arr[i];
			n_valid++;
		}
		i++;
	}
	if (n_valid > 0)
		res /= n_valid;
	return (res);
}

#include <stdio.h>
int	main()
{
	int arr[4] = {1, 2, 101, 3};

	printf("%f\n", average(arr, 4));
}
