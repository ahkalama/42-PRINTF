/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:16:11 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/16 14:52:22 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
// #include <stdio.h>
// int main()
// {
// 	int i = '9';
// 	printf("%d", ft_isdigit(i));
// }
// Fonksiyona girilen parametrenin rakam 
// olup olmadığını döndürür.(0 veya 1 şeklinde)