/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:56:03 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/09 11:56:04 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Merhaba42";
// 	printf("%s",ft_strchr(str,'b'));

// }

//Bulunan karakterden "c" itibaren sayar ve döndürür.
