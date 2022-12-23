/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkalama <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:55:50 by ahkalama          #+#    #+#             */
/*   Updated: 2022/12/17 21:59:06 by ahkalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/ahkalama/Desktop/test.txt", O_RDWR | O_CREAT ,777);
// 	ft_putchar_fd('A',fd);
// }
// Belirtilen dosya tanimlayicisina (fd) c karakterini yazar.
