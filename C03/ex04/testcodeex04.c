#include<stdio.h>
#include<strings.h>

char	*ft_strstr(char *s1, char *s2);

int	main()
{
	char	s1[100] = "i have an apple ";
	char	s2[100] = "a";
	char	s3[100] = "i have an apple";
	char	s4[100] = "a";

	printf("Standard :%s \n",strstr(s1, s2));
	printf("Yours :%s \n",ft_strstr(s3, s4));

}
