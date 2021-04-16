/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:06:10 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 11:36:33 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char c)
{
	char *hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[(unsigned char)c / 16]);
	ft_putchar(hexa[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
