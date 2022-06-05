/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:12:06 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/04 17:53:16 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		while (i <= (nb / i))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	value;

	if (nb < 0)
		return (2);
	value = ft_is_prime(nb);
	while (value != 1)
	{
		nb++;
		value = ft_is_prime(nb);
	}
	return (nb);
}
