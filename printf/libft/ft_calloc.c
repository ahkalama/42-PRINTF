/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:09 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/16 19:19:34 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <stdio.h>
// int	main()
// {
// 	char a[] = "ahmet";
// 	ft_calloc(3,2);
// }
// Malloc fonksiyonu ile bellekte alan açıp 
// ft_bzero fonksiyonu ile null atayarak döndürüyoruz.