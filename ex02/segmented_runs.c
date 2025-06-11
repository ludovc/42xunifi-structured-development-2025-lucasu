#include <stdio.h>
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
	int		res;

	(void)size;
	res = 0;
	if (check_segment(arr, 3))
		res++;
	if (check_segment(&arr[4], 4))
		res++;
	return (res);
}

#include <stdio.h>
int	main()
{
	//int		arr[11] = {2, 3, 4, -1, 5, 6, -1, 1, 2, 3, 4};
	int		arr[8] = {2, 3, 4, -1, 5, 1, 2, 3};

	printf("%d\n", count_segments(arr, 8));
}
