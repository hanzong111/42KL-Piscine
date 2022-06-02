/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:13 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/02 11:46:19 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		ft_compare(char *str, char*to_find);
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	char	*wordptr;

	if (*to_find == '\0')
		return (str);
	else
	{
		while (*str != '\0')
		{
			if (*str == *to_find)
			{
				wordptr = str;
				if (ft_compare(str, to_find) == 1)
					return (wordptr);
				else
					str++;
			}
			else
				str++;
		}
	}
	return (0);
}

int	ft_compare(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
		}
		else
			return (0);
	}
	return (1);
}
