/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:56:14 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 21:52:37 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen (src));
}
// #include <stdio.h>

// int main()
// {
// 	char dest[] = "merhaba";
// 	char src[] = "zumeret";

// 	printf("%zu\n",ft_strlcpy(dest,src,4));
// }

// Fonksiyon paremetresinde girilen n değeri kadar 
// src'yi dest'e kopyalar. ve src uzunluğunu döndürür.