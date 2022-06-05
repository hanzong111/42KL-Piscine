/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:40:29 by ojing-ha          #+#    #+#             */
/*   Updated: 2022/06/05 13:14:37 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	while (++x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			write(1, &argv[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int		count;
	int		i;
	char	*dummy;

	count = 1;
	while (count > 0)
	{
		i = 1;
		count = 0;
		while (i < (argc - 1))
		{
			if (*argv[i + 1] < *argv[i])
			{
				dummy = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = dummy;
				count++;
			}
			i++;
		}
	}
	ft_print(argc, argv);
	return (0);
}
