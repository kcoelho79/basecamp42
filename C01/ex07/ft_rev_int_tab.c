/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:31:48 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 02:22:48 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = -1;
	while (i++ < --size)
	{
		ft_swap(&tab[i], &tab[size]);
	}
}
