/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:49:41 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 18:34:52 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int len_s;
	int i;

	count = 0;
	while (dest[count] != '\0')
		count++;
	len_s = count;
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_s] = src[i];
		i++;
		len_s++;
	}
	dest[len_s] = '\0';
	return (dest);
}
