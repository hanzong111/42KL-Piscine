#include<stdio.h>
#include<strings.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char	s1[10] = "aaaaac";
	char	s2[10] = "";

	strncmp(s1, s2,2);
	ft_strncmp(s1, s2,2);

	printf("Standard :%d\n",strncmp(s1, s2,10));
	printf("Yours :%d\n",ft_strncmp(s1, s2, 10));
}
