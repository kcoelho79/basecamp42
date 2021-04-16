/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:59:55 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/15 18:17:36 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int c;
	int j;

	c = argc - 1;
	if (argc > 1)
	{
		while (c > 0)
		{
			j = 0;
			while (argv[c][j])
			{
				write(1, &argv[c][j], 1);
				j++;
			}
			c--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
