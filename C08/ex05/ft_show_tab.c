/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:55:32 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/06 15:44:36 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int x)
{
	int		i;
	char	num[12];

	i = 0;
	while (x > 0)
	{
		num[i] = x % 10 + '0';
		x = x / 10;
		i++;
	}
	num[i] = '\0';
	while (--i >= 0)
		write(1, &num[i], 1);
	write(1, "\n", 1);
}

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str != 0)
	{
		ft_putstr(par[a].str);
		ft_putnbr(par[a].size);
		ft_putstr(par[a].copy);
		a++;
	}
}
