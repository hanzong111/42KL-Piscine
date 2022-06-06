/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:59:20 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/05 16:58:55 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sepcount(char *sep)
{
	int	sepcount ;

	sepcount = 0;
	while (*sep != '\0')
	{
		sepcount++;
		sep++;
	}
	return (sepcount);
}

int	ft_strcount(char **strs)
{
	int	a;
	int	b;
	int	count;

	count = 0;
	a = 0;
	while (strs[a] != NULL)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	return (count);
}

char	*ft_strcat(char *str, char *finalstr)
{
	while (*str != '\0')
	{
		*finalstr = *str;
		str++;
		finalstr++;
	}
	return (finalstr);
}

char	*ft_strjoin2(int size, char **strs, char *sep, char *finalstr)
{
	char	*ptr;
	int		i;
	int		sepcount;

	i = 0;
	ptr = finalstr;
	sepcount = size - 1;
	while (i < size && strs[i] != NULL)
	{
		finalstr = ft_strcat(strs[i], finalstr);
		if (sepcount > 0)
		{
			finalstr = ft_strcat(sep, finalstr);
			sepcount--;
		}
		i++;
	}
	*finalstr = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	int		sepcount;
	char	*finalstr;
	char	*ptr;

	if (size <= 0)
		return (NULL);
	count = ft_strcount(strs);
	sepcount = ft_sepcount(sep);
	sepcount = sepcount * (size - 1);
	finalstr = (char *) malloc (sizeof(char) * (count + sepcount + 1));
	ptr = ft_strjoin2(size, strs, sep, finalstr);
	return (ptr);
}
