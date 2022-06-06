#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int		ft_ultimate_range(int **range,int min, int max);

int	main()
{
	int	min = 1;
	int max = 100;
	int	diff;
	int	i = 0;
	int	**range = (int **) malloc (sizeof(int *));

	diff = max - min;
	printf("The size of your range is : %d\n",ft_ultimate_range(range,min,max));
	
	while (diff-- > 0)
	{
		printf("%d ",range[0][i]);
		i++;
	}
}
