/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:24:24 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/05 12:58:10 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	negcount;

	negcount = 0;
	nbr = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negcount++;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	if (negcount % 2 != 0)
		nbr = nbr * -1;
	return (nbr);
}
