/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:58:26 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/06 14:52:01 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcopy(char *av)
{
	int		count;
	char	*init_ptr;
	char	*ptr;

	count = ft_strlen(av);
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	init_ptr = ptr;
	while (*av != '\0')
	{
		*ptr = *av;
		ptr++;
		av++;
	}
	*ptr = '\0';
	return (init_ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int			i;

	stock = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	i= 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcopy(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;

	return (stock);
}
