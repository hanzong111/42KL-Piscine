#include<stdio.h>
#include<strings.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char	s1[10] = "a";
	char	s2[10] = "";

	strcmp(s1, s2);
	ft_strcmp(s1, s2);

	printf("Standard :%d\n",strcmp(s1, s2));
	printf("Yours :%d\n",ft_strcmp(s1, s2));
}
