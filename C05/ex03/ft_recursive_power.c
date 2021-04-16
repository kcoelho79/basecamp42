/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:04:24 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/14 18:31:28 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;

	res = nb;
	if (power > 1)
		return (res * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (res);
}
