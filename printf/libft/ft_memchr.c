/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:19:44 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/16 19:30:55 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- != 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main()
// {	
// 	char *s = "Ahmet";
// 	printf("%s\n", (char *)ft_memchr(s,'m',6));
// }

/* s dizisinde c parametresine girilen değeri bulana kadar indexlerde gezer 
 * ve c parametresini bulunca adresini döndürür. 
 * n değeri kadar arama yapar. */