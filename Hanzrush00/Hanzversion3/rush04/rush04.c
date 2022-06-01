/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:19:28 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/21 20:44:17 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = x;
	b = y;
	while (b > 0)
	{
		while (a > 0)
		{
			if (a == x && b == y || (x != 1 && a == 1) && (y != 1 && b == 1))
				ft_putchar('A');
			else if (a == 1 && b == y || a == x && b == 1 || a == 1 && b == 1)
				ft_putchar('C');
			else if (b == y || b == 1 || a == 1 || a == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			a--;
		}
		ft_putchar('\n');
		a = x;
		b--;
	}
}
