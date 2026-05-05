/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:44:11 by amakino           #+#    #+#             */
/*   Updated: 2026/04/25 12:03:23 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
#endif

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#ifdef TEST

int	main(void)
{
	int	fd;

	write(1, "STDOUT: ", 8);
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('4', fd);
		ft_putchar_fd('2', fd);
		close(fd);
		write(1, "File 'test.txt' created.\n", 25);
	}
	return (0);
}
#endif
