/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:00:59 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/04 14:36:13 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*ptr;
	int		i;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	ptr = (char *) malloc (sizeof (char) * count + 1);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
