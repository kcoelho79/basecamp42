/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:29:55 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/14 16:34:46 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		res = res * (nb);
		nb--;
	}
	return (res);
}
