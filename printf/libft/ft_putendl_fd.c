/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:55:53 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 21:58:39 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// #include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/ahkalama/Desktop/magic.txt",O_WRONLY | O_CREAT ,777);
// 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
// }
// s dizisini fd dosyasına yazar ve bir alt satıra geçer.
