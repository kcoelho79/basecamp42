/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:06:55 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 19:52:03 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int f;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
				return (str + i);
			f++;
		}
		i++;
	}
	return (0);
}
