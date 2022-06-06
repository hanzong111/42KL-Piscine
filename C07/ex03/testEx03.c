#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strcount(char **strs);

int	main()
{
	char	seperator[10] = "BBOOMBOOM";
	char	s1[100] = "hello world";
	char	s2[100] = "no boooommmm";
	char	s3[100] = "shakslaksksj";
	char	s4[100] = "HI STEEVE";
	char	s5[100] = "HEY JASON";
	char	**strs;
	char	*ptr;
	int		size = 6;


	strs = (char **)malloc(sizeof(char *) *5);
	strs[0] = s1;
	strs[1] = s2;
	strs[2] = s3;
	strs[3] = s4;
	strs[4] = s5;


	ptr = ft_strjoin(size,strs,seperator);

	if (size > 0)
	{
		while (*ptr != '\0')
		{
			write(1, ptr, 1);
			ptr++;
		}
	}


}
