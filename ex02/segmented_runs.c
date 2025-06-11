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
	int		i;
	int		size_segment;

	res = 0;
	size_segment = 0;
	i = 0;
	while (i < size + 1)
	{
		if (arr[i] == -1 || i == size)
		{
			if (check_segment(&arr[i], size_segment))
				res++;
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

	printf("%d\n", count_segments(arr, 11));
}
