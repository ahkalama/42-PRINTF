/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:15:14 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 18:28:04 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	d;
	int	s;
	int	i;

	d = 1;
	s = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		d = d * -1;
		str++;
	}
	else if (str[i] == '+')
		str++;
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = (s * 10);
		s = s + (str[i] - '0');
		str++;
	}
	return (s * d);
}
// #include <stdio.h>
// int main()
// {
//     char a[] = " -12";
//     printf("%d", ft_atoi(a));
// }

// str'den gelen char dizisini int değere çeviriyor. (isspace olmayacak)
// , eğer main de birden fazla işaret (- / +) eklersek 
// sonuç 0 verecek, çünkü biz burda int (tam sayı) değeri çeviriyoruz.