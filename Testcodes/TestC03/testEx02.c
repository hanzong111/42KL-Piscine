#include<stdio.h>
#include<strings.h>

char	*ft_strcat(char *s1, char *s2);

int	main()
{
	char	s1[100] = "hello ";
	char	s2[100] = "world";
	char	s3[100] = "hello ";
	char	s4[100] = "world";

	printf("Standard :%s \n",strcat(s1, s2));
	printf("Yours :%s \n",ft_strcat(s3, s4));

}
