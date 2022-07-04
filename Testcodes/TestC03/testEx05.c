#include<stdio.h>
#include<strings.h>

unsigned int	ft_strlcat(char *s1, char *s2, unsigned int size);

int	main()
{
	char	s1[100] = "hello ";
	char	s2[100] = "Boom shakalaka";
	char	s3[100] = "hello ";
	char	s4[100] = "Boom shakalaka";

	printf("Standard :%lu \n",strlcat(s1, s2, 10));
	printf("Yours :%d \n",ft_strlcat(s3, s4,10));
	printf("Standard :%s\n",s1);
	printf("Yours :%s\n",s3);
}
