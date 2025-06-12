int	check_segment(const int *arr, int size)
{
	int		i;

	i = 0;
	while (size - i >= 3)
	{
		if (arr[i + 1] > arr[i] && arr[i + 2] > arr[i + 1])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_segments(const int *arr, int size)
{
	int		i;
	int		size_segment;
	int		start_segment;
	int		res;

	res = 0;
	size_segment = 0;
	start_segment = 0;
	i = 0;
	while (i < size + 1)
	{
		if (arr[i] == -1 || i == size)
		{
			if (check_segment(&arr[start_segment], size_segment))
				res++;
			start_segment = i + 1;
			size_segment = 0;
		}
		else
		{
			size_segment++;
		}
		i++;
	}
	return (res);
}

#include <stdio.h>
int	main()
{
	int		arr[11] = {2, 3, 4, -1, 5, 6, -1, 1, 2, 3, 4};
	//int		arr[8] = {2, 3, 4, -1, 5, 1, 2, 3};
	//int		arr[4] = {2, 3, 5, -1};
	//int		arr[4] = {-1, 3, 5, 6};
	//int		arr[9] = {2, 3, 5, -1, -1, 4, 2, 3, 5};

	printf("%d\n", count_segments(arr, 11));
}
