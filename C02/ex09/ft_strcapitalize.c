/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:27:45 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 11:29:54 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if ((c < '0' || c > 'z') || (c > '9' && c < 'A') ||
		(c > 'Z' && c < 'a'))
		return (0);
	return (1);
}

int		ft_is_num_or_lowercase(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (ft_is_alpha(str[counter]) == 1 &&
			ft_is_alpha(str[counter - 1]) == 0)
		{
			if (str[counter] >= 'a' && str[counter] <= 'z')
				str[counter] -= 32;
		}
		else if (ft_is_alpha(str[counter]) == 1 &&
			!(ft_is_num_or_lowercase(str[counter])))
			str[counter] += 32;
		counter++;
	}
	return (str);
}
