/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:15:51 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/16 14:48:17 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
// #include <stdio.h>
// int	main()
// {
// 	int a = ft_isalpha('a');
// 	printf("%d\n", a);
// }
// Fonksiyona girilen parametrenin alfabetik karakter olup olmadığını döndürür.
// (0 veya 1 şeklinde)