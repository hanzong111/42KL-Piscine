#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char 	**split;
	int		index = 0;	
	char	*str = argv[1];

	split = ft_split(str, argv[2]);
	while (split[index] != 0)
	{
		printf("split[%d] :%s\n",index, &split[index][0]);
		index++;
	}
	printf("Inside First Array :%s",&split[0][0]);



	if (argc != 3)
		printf("HAHHAHAHAH");

}
