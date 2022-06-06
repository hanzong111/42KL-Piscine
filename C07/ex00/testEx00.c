#include<stdio.h>
#include<string.h>

char	*ft_strdup(char *src);

int	main()
{
	printf("Standard :%s\n",strdup("hahaha"));
	printf("Yours :%s\n",ft_strdup("hahaha"));

	printf("Standard :%s\n",strdup(""));
	printf("Yours :%s\n",ft_strdup(""));

	printf("Standard :%s\n",strdup(")!&@%"));
	printf("Yours :%s\n",ft_strdup(")!&@%"));
}
