/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:56:17 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 22:49:21 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int	main()
// {
// 	char c[] = "ahmet";
// 	printf("%zu", ft_strlen(c));
// }
// Fonksiyonun parametresine girilen dizinin uzunluğunu döndürür.
