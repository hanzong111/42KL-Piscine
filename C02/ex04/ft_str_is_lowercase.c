/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:37:59 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/31 13:10:35 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (*str >= 97 && *str <= 122)
				str++;
			else
				return (0);
		}
	}
	return (1);
}