/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:29:18 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:36 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*init_dest;
	unsigned int	i;

	init_dest = dest;
	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (i < n && *src == '\0')
	{
		while (++i <= n)
		{
			*dest = '\0';
			dest++;
		}
	}
	return (init_dest);
}
