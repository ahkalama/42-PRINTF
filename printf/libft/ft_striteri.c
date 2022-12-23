/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:56:08 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 19:36:27 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// #include <stdio.h>
// void	ft_42(unsigned a, char *b)
// {
// 	*b = ft_toupper(*b);
// }
// int	main()
// {
// 	char str[] = "ahmet";
// 	ft_striteri(str, ft_42);
// 	printf("%s", str);
// }
// s stringindeki her karakterin adresine tek tek f fonksiyonu uygulanir.
