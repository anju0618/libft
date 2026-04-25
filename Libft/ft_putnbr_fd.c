/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:17:42 by amakino           #+#    #+#             */
/*   Updated: 2026/04/25 12:35:02 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
#endif

void	ft_putnbr_fd(int n, int fd)
{
	long long int	num;

	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}

#ifdef TEST

int	main(void)
{
	int	fd;

	write(1, "--- Standard Output Test ---\n", 29);
	write(1, "Zero: ", 6);
	ft_putnbr_fd(0, 1);
	write(1, "\nPositive: ", 11);
	ft_putnbr_fd(42, 1);
	write(1, "\nNegative: ", 11);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\nMax: ", 6);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n\n", 2);
	fd = open("nbr_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putnbr_fd(-4242, fd);
		close(fd);
		write(1, "Check 'nbr_test.txt' for '-4242'\n", 33);
	}
	return (0);
}
#endif
