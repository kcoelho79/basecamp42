/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:32:29 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/14 17:58:24 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int count;
	int res;

	res = nb;
	count = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power)
	{
		res = res * nb;
		count++;
	}
	return (res);
}
