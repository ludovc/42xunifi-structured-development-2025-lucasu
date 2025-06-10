void	first_last(int arr[], int size, int target, int *first, int *last)
{
	int		i;
	int		first_found;

	first_found = 0;
	*first = -1;
	*last = -1;
	i = 0;
	while (i < size)
	{
		if (arr[i] == target)
		{
			if (!first_found)
			{
				*first = i;
				first_found = 1;
			}
			*last = i;
		}
		i++;
	}
}

#include <stdio.h>
int	main()
{
	int		arr[5] = {1, 2, 3, 3, 5};
	int		first;
	int		last;

	first_last(arr, 5, 3, &first, &last);
	printf("first: %d\n", first);
	printf("last: %d\n", last);
}
