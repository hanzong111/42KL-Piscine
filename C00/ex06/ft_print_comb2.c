/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:58:14 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/24 18:09:59 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnum(int a, int b, int c, int d);
int		ft_loop(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 47;
	while (++a < 58)
	{
		b = 47;
		while (++b < 58)
		{
			c = 47;
			while (++c < 58)
			{
				d = 47;
				while (++d < 58)
				{
					ft_loop(a, b, c, d);
				}
			}
		}
	}
}

void	ft_putnum(int a, int b, int c, int d)
{
	if ((a + b == 113) && (c + d == 114) && (a > b))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &", ", 2);
	}
}

int	ft_loop(int a, int b, int c, int d)
{
	if ((c == a && d == b) || a + b > c + d)
		return (d);
	else if (a + b == c + d)
	{
		if (a > b)
			return (d);
		else
		{
			ft_putnum(a, b, c, d);
			return (d);
		}
	}
	else
	{
		ft_putnum(a, b, c, d);
		return (d);
	}
}
