/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:20:49 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/06 00:52:41 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int fn, int sn)
{
	ft_putchar(fn / 10 + '0');
	ft_putchar(fn % 10 + '0');
	write(1, " ", 1);
	ft_putchar(sn / 10 + '0');
	ft_putchar(sn % 10 + '0');
	if (fn < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int fn;
	int sn;

	fn = 0;
	while (fn <= 99)
	{
		sn = fn + 1;
		while (sn <= 99)
		{
			ft_print_nums(fn, sn);
			sn++;
		}
		fn++;
	}
}
