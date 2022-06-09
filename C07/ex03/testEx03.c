#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strcount(char **strs);

int	main()
{
	char	seperator[10] = "BBOOMBOOM";
	char	s1[20] = "hello world\0";
	char	s2[20] = "no boooommmm\0";
	char	s3[20] = "shakslaksksj\0";
	char	s4[20] = "HI STEEVE\0";
	//char	s5[20] = "HEY JASON\0";
	char	**strs;
	char	*ptr;
	int		size = 4;


	strs = (char **)malloc(sizeof(char *) * (size + 1));
	if (strs == NULL)
		return (0);
	strs[0] = s1;
	strs[1] = s2;
	strs[2] = s3;
	strs[3] = s4;
	//strs[4] = s5;
	strs[4] = 0;
	


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
