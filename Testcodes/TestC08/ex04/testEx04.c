#include "ft_stock_str.h"
#include <stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	
	struct s_stock_str *strs= ft_strs_to_tab(argc, argv);
	int i = 0;
	while(i < 3)
	{
		printf("%i\n",strs[i].size);
		printf("%s\n",strs[i].str);
		printf("%s\n",strs[i].copy);
		i++;
	}

}
