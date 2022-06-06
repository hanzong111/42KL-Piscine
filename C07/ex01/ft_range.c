/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:43:08 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/05 17:07:12 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*ptr;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	ptr = (int *) malloc (sizeof(int) * diff);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
