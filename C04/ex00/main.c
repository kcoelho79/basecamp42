/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:36:43 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 22:42:50 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{
	char str[] = "Eu estou no basecamp";
	char str1[] = "";
	char str2[] = "-1212";

	printf("teste \n");
	printf("str: %s <lenght: %i \n",str,ft_strlen(str));
	printf("str1: %s <lenght: %i \n",str1,ft_strlen(str1));
	printf("str2: %s <lenght: %i \n",str2,ft_strlen(str2));
}