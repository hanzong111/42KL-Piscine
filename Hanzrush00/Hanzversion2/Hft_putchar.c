/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:11:53 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/21 12:47:07 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int a, int b, int x, int y)
{
	char	e;
	char	f;
	char	g;
	char	h;

	e = 'o';
	f = '-';
	g = '|';
	h = ' ';
	if (a == x && b == y || a == 1 && b == y || a == 1 && b == 1)
		write(1, &e, 1);
	else if (a == 1 && b == y || a == x && b == 1)
		write(1, &e, 1);
	else if (a == x || a == 1)
		write(1, &g, 1);
	else if (b == y || b == 1)
		write(1, &f, 1);
	else
		write(1, &h, 1);
	a--;
}
