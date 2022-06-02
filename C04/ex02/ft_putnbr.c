/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:20:18 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/02 15:43:57 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_positivenum(int i, int number);
void	ft_negativenum(int i, int number);

void	ft_putnbr(int nb)
{
	int	i;
	int	number;

	i = 0;
	number = nb;
	if (number > 0)
		ft_positivenum(i, number);
	else if (number == -2147483648)
	{
		number = -214748364;
		ft_negativenum(i, number);
		write(1, "8", 1);
	}
	else if (number == 0)
		write(1, "0", 1);
	else
		ft_negativenum(i, number);
}

void	ft_positivenum(int i, int number)
{
	char	arry[10];

	while (number > 0)
	{
		arry[i] = (number % 10) + 48;
		number = number / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &arry[i], 1);
		i--;
	}
}

void	ft_negativenum(int i, int number)
{
	char	arry[10];

	number = -1 * number;
	while (number > 0)
	{
		arry[i] = (number % 10) + 48;
		number = number / 10;
		i++;
	}
	i--;
	write(1, "-", 1);
	while (i >= 0)
	{
		write(1, &arry[i], 1);
		i--;
	}
}
