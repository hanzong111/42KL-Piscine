/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:36:46 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/31 21:02:10 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclength;
	char			*init_ptr;

	i = 0;
	srclength = 0;
	init_ptr = src;
	while (*src != '\0')
	{
		src++;
		srclength++;
	}
	if (size == 0)
		return (srclength);
	while (++i < size)
	{
		*dest = *init_ptr;
		dest++;
		init_ptr++;
	}
	*dest = '\0';
	return (srclength);
}
