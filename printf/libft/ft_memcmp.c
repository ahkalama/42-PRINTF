/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:19:55 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/16 14:29:28 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_uc;
	const unsigned char	*s2_uc;
	size_t				index;

	index = 0;
	s1_uc = (const unsigned char *)s1;
	s2_uc = (const unsigned char *)s2;
	while (index < n)
	{
		if (s1_uc[index] != s2_uc[index])
			return (s1_uc[index] - s2_uc[index]);
		index++;
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	char *s1 = "Ahme";
// 	char *s2 = "Ahmet";

// 	printf("%d",ft_memcmp(s1,s2,9));
// }

// s1 ve s2 belleklerini n değeri kadar karşılaştırır
// her ikisinin değerleri aynı ise 0 döndürür
// eğer farklı ise 0'dan farklı değer döndürür.