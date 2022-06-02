#include<stdio.h>
#include<strings.h>

char	*ft_strncat(char *s1, char *s2, unsigned int nb);

int	main()
{
	char	s1[100] = "hello ";
	char	s2[100] = "boom";
	char	s3[100] = "hello ";
	char	s4[100] = "boom";

	printf("Standard :%s \n",strncat(s1, s2,4));
	printf("Yours :%s \n",ft_strncat(s3, s4,4));

}
