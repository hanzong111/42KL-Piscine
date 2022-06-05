/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:49:24 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/03 12:21:40 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_program_name(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (0);
	ft_print_program_name(argv[0]);
	return (0);
}
