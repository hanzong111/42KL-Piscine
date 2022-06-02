/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:44:26 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/05/31 19:57:51 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*ft_wordchange(char *str);

char	*ft_strcapitalize(char *str)
{
	char	*init_ptr;

	init_ptr = str;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			str = ft_wordchange(str);
			str++;
		}
		else if (*str >= '0' && *str <= '9')
			str++;
		else
			str++;
	}
	return (init_ptr);
}

char	*ft_wordchange(char *str)
{
	if (*(str - 1) >= '0' && *(str - 1) <= '9')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	else if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		str++;
	}
	else
		str++;
	while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
			str++;
		}
		else
			str++;
	}
	return (str);
}
