#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);
int		ft_totalarry(char *str, char *charset);

int	main(int argc,char **argv)
{
	char 	**split;
	int		index = 0;	
	char	*str = argv[1];
	int  a;


	split = ft_split(str,argv[2]);
	while (split[index] != 0)
	{
	
		a = 0;
		printf("Array[%d]:",index);
		while (split[index][a] != '\0')
		{
			write(1, &split[index][a], 1);
			a++;
		}
		printf("\n");
		index++;
	}
	printf("Inside First Array :%s",&split[0][0]);



	 if (argc != 3)
	 	printf("\n");
	
	return (0);

}
