/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:57:11 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/02 14:05:41 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destcount;
	unsigned int	srccount;
	unsigned int	i;

	destcount = 0;
	srccount = 0;
	i = 0;
	while (*dest != '\0')
	{
		dest++;
		destcount++;
	}
	while (src[srccount] != '\0')
		srccount++;
	while (++i <= (size - destcount - 1))
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destcount + srccount);
}
