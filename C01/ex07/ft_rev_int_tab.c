/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:47:26 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/25 15:21:17 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temporary;

	i = 0;
	while (i < (size / 2))
	{
		temporary = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temporary;
		i++;
	}
}
