/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:16:03 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/16 14:28:07 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
// #include <stdio.h>
// int	main()
// {
// 	int a = ft_isascii('');
// 	printf("%d", a);
// }
// Fonksiyona girilen parametrenin ascii değer aralığında 
// olup olmadığını döndürür. (0 veya 1 şeklinde)