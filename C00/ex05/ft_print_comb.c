/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:58:14 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/24 18:00:28 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnum(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 48;
	d = 8;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				ft_putnum(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, &d, 1);
	write(1, &d, 1);
}

void	ft_putnum(int a, int b, int c)
{
	if (a == b || a == c || b == c)
		c++;
	else if (a > b || b > c || a > c)
		c++;
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &", ", 2);
	}	
}

int main()
{
	ft_print_comb();
	return 0;
}
