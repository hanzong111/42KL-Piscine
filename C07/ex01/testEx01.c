#include<stdio.h>
#include<string.h>
#include<limits.h>

int		*ft_range(int min, int max);

int	main()
{
	int	min = 0;
	int max = 0;
	int	diff;
	int	*ptr;

	diff = max - min;
	ptr = ft_range(min,max);
	
	printf("%p", ptr);
	while (diff-- > 0)
	{
		printf("%d ",*ptr);
		ptr++;
	}
}
