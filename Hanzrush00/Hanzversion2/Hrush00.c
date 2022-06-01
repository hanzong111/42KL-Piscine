/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2try.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:52:47 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/21 12:40:47 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int a, int b, int x, int y);

void	rush(int x, int y)
{
	int		a ;
	int		b ;
	char	s;

	a = x ;
	b = y;
	s = '\n';
	while (b > 0)
	{
		while (a > 0)
		{
			ft_putchar(a, b, x, y);
			a--;
		}
		write(1, &s, 1);
		a = x;
		b--;
	}
}
