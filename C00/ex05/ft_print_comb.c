/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:17:54 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/06 00:51:41 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int i)
{
	char c;

	c = i + '0';
	write(1, &c, 1);
}

void	ft_print_nums(int c, int d, int u)
{
	ft_print_int(c);
	ft_print_int(d);
	ft_print_int(u);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_print_nums(c, d, u);
				if (c != 7 || d != 8 || u != 9)
				{
					write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
