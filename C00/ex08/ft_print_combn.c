/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:56:09 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/28 11:13:42 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_numreset(int n, int *start);
void	ft_printnum(int n, int *start);

int	ft_numreset(int n, int *start)
{
	int	a;

	a = 1;
	while (a <= n)
	{
		if (start[n - a] >= (58 - a))
		{
			if (a == n)
				return (0);
			else
				a++;
		}
		else
		{
			start[n - a]++;
			while (a >= 1)
			{
				start[n - a + 1] = start[n - a] + 1;
				a--;
			}
			break ;
		}
	}
	return (1);
}

void	ft_printnum(int n, int *start)
{
	int	i;

	while (start[n - 1] <= 57)
	{
		i = 0;
		while (i < n)
		{
			write(1, &start[i], 1);
			i++;
		}
		write(1, ", ", 2);
		start[n - 1]++;
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	numbers[10];
	int	value;
	int	back;

	back = 8;
	a = 0;
	while (a < 9)
	{
		numbers[a] = '0' + a;
		a++;
	}
	a = 1;
	while (a < 8)
	{
		ft_printnum(n, numbers);
		if (ft_numreset(n, numbers) == 0)
			break ;
	}
	write(1, &back, 1);
	write(1, &back, 1);
}

int	main()
{
	ft_print_combn(3);
	return 0;
}
