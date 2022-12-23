/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:56:19 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 21:12:08 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
// #include <stdio.h>

// char	ft_42(unsigned int a,char c)
// {
// 	return(ft_toupper(c));
// }

// int main()
// {
// 	char s[] = "merhaba";
// 	char *str;
// 	str = ft_strmapi(s,ft_42);

// 	printf("%s",str);
// }

// calloc ile bellekte yer açılır ve
// s dizisinin her indexine parametredeki fonksiyon uygulanır.