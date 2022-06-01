/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:22:33 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/25 15:55:32 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	countcheck;
	int	temporary;
	int	i;

	countcheck = 1;
	while (countcheck > 0)
	{
		countcheck = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i + 1] < tab[i])
			{
				temporary = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temporary;
				countcheck++;
				i++;
			}
			else
				i++;
		}
	}
}
