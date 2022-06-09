/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:27:16 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/09 18:28:51 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checkdups(char *str, char *charset, int index)
{
	int	b;

	b = 0;
	if (index == 1)
	{
		while (charset[b] != '\0')
		{
			if (*str == charset[b])
				return (0);
			b++;
		}
		return (1);
	}
	else
	{
		while (charset[b] != '\0')
		{
			if (*(str - 1) == charset[b])
				return (0);
			b++;
		}
		return (1);
	}
}

int	ft_array_conditions(char *char1, char *lastchar, char *charset, int count)
{
	if (ft_checkdups(char1, charset, 1) == 0)
	{	
		if (ft_checkdups(lastchar, charset, 2) == 0)
			return (count);
		else
			return (count + 1);
	}
	else if (ft_checkdups(char1, charset, 1)
		&& ft_checkdups(lastchar, charset, 2))
		return (count + 2);
	else
		return (count + 1);
}

int	ft_totalarry(char *str, char *charset)
{
	char	*init_ptr;
	int		b;
	int		count;	

	count = 0;
	init_ptr = str;
	if (ft_checkdups(str, charset, 1) == 0)
	{
		str++;
		count++;
	}
	while (*str != '\0')
	{
		b = -1;
		while (charset[++b] != '\0')
		{
			if ((*str == charset[b]) && ft_checkdups(str, charset, 2))
			{
				count++;
				break ;
			}	
		}
		str++;
	}
	return (ft_array_conditions(init_ptr, str, charset, count));
}

char	*ft_strcpy(char *str, char *charset, char **split, int position)
{
	int		count;
	int		a;
	char	*init_ptr;

	a = -1;
	count = 0;
	while (ft_checkdups(str, charset, 1) == 0)
		str++;
	init_ptr = str;
	while (ft_checkdups(str, charset, 1) == 1)
	{
		count++;
		str++;
	}
	split[position] = (char *) malloc(sizeof(char) * (count + 1));
	split[position][count] = '\0';
	while (++a < count)
	{
		split[position][a] = *init_ptr;
		init_ptr++;
	}
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	int		arraycount;
	int		index;
	int		a;
	char	**split;

	a = 0;
	index = -1;
	if (str == NULL || *str == '\0')
	{
		split = (char **) malloc(sizeof(char *) * 1);
		split[0] = NULL;
		return (split);
	}
	arraycount = ft_totalarry(str, charset);
	split = (char **) malloc(sizeof(char *) * arraycount);
	if (charset[0] == '\0' && str[0] != '\0')
	{
		split[0] = str;
		split[1] = 0;
		return (split);
	}
	while (++index < (arraycount - 1))
		str = ft_strcpy(str, charset, split, index);
	split[index] = 0;
	return (split);
}
