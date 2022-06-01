/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:15:59 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/21 11:11:52 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void rush( int x , int y)
{
	int	a;
	int	b;
	int	c;

	a = x;
	b = x;
	c = x;
	if ( x==1 || y==1)
	{
		ft_putchar('o');
		ft_putchar(10);
	}
	else if ( x == 1 )
	{
		ft_putchar('o');
		ft_putchar(10);
		y--;
		while ( y > 1)
		{
			ft_putchar('|');
			ft_putchar(10);
			y--;
		}
		ft_putchar('o');
		ft_putchar(10);
	}
	else if ( y == 1 )
	{
		ft_putchar('o');
		x--;
		while ( x > 1 )
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('o');
		a--;
		while ( a > 1)
		{
			ft_putchar('-');
			a--;
		}
		ft_putchar('o');
		ft_putchar(10);
		y--;
		while ( y > 1 )
		{
			ft_putchar('|');
			b--;
			while ( b > 1)
			{
				ft_putchar(' ');
				b--;
			}
			ft_putchar('|');
			ft_putchar(10);
			y--;
			b = x ;
		}
		ft_putchar('o');
		c--;
		while ( c > 1)
		{
			ft_putchar('-');
			c--;
		}
		ft_putchar('o');
		ft_putchar(10);
	}
}
