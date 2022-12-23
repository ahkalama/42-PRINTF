/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:20:25 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/10 01:17:25 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else if (dst > src)
	{
		while (n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return (dst);
}
// #include <stdio.h>

// int main()
// {
// 	char dst[] = "Ahmet";
// 	char src[] = "pati";

// 	printf("%s",ft_memmove(dst + 2,src,3));
// }
// Memcopy ile aynı işlevi yapar (aynı maini kopyalayıp bakabilirsin) fakat
// bellekte overlop olmaması için tersten kopyalar.
