#include <stdio.h>

int	valid_number(int nbr)
{
	return (nbr >= 0 && nbr <= 100);
}

float	average(const int *arr, int size)
{
	int		i;
	int		size_valid;
	float	res;

	i = 0;
	while (i < size)
	{
		if (valid_number(arr[i]))
		{
			res += arr[i];
			size_valid++;
		}
		i++;
	}
	if (size_valid > 0)
		res = res / size_valid;
	return (res);
}

int	main()
{
	int	arr[5] = {1, 2, 3, 4, 5};

	printf("%f\n", average(arr, 5));
}
