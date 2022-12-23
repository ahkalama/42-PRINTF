/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:55:57 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 23:00:58 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// #include <fcntl.h>
// #include <stdio.h>
// int main()
// {
// 	int fd= open("/Users/ahkalama/Desktop/text.txt",O_RDWR | O_CREAT, 777);
// 	ft_putstr_fd("anime kızı",fd);
// 	printf("%d",fd);
// }
// fd dosyasını s dizisini yazar.