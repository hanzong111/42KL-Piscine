#include<stdio.h>
#include<strings.h>

int	ft_strlen(char *str);

int main()
{
	char	s1[100] = "ahbahah/*&^x";

	printf("Standard :%lu\n",strlen(s1));
	printf("Yours :%d\n",ft_strlen(s1));
}
