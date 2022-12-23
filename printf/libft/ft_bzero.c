/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:18 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 15:14:15 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <unistd.h>
// int	main()
// {
// 	char a[] = "ahmet";
// 	ft_bzero(a, 1);
// 	write(1, &a, 5);
// }
// s dizisine n değeri kadar null değer atar.
// Command + Shift + 7 Yaparak Yorum Satırlarını Kaldırıp, Ekleyebiliriz.