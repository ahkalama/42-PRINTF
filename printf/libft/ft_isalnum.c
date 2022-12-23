/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:15:39 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 14:57:00 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
// #include <stdio.h>
// int main()
// {
// 	char s = ' ';
// 	printf("%d", ft_isalnum(s));
// }
// Fonksiyona girilen parametrenin alfanumerik karakter olup olmadığını
// döndürür. (0 veya 1 şeklinde)
