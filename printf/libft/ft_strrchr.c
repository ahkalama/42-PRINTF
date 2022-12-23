/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:56:26 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/15 15:55:21 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main()
// {
// 	char s[] = "ahm";
// 	printf("%s",ft_strrchr(s,'h'));
// }

// Bulunan karakterden "c" itibaren sayar ve döndürür.
// strchr ile aynı sonucu verir.
// (Bu olayı tersten başlayarak yapar)
