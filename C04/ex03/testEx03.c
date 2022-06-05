#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int	ft_atoi(char *str);

int main()
{
	
	printf("Standard :%d\n",atoi("  ---123//4"));
	printf("Yours :%d\n",ft_atoi("  -- ++123  4"));
}
