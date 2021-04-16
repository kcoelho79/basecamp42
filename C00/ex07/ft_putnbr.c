/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:57:17 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/05 22:58:43 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_num(int nb)
{
	unsigned int num_checked;

	if (nb == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		num_checked = nb * (-1);
	}
	else
	{
		num_checked = nb;
	}
	return (num_checked);
}

void	ft_putnbr(int nb)
{
	char			n[10];
	unsigned int	num;
	int				count;

	num = ft_check_num(nb);
	count = 9;
	while (count >= 0)
	{
		n[count] = (num % 10) + '0';
		num = num / 10;
		count--;
	}
	while (++count < 10 && nb != 0)
		nb = nb / 10;
	write(1, &n[10 - count], count);
}
