/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:04:46 by amakino           #+#    #+#             */
/*   Updated: 2026/04/25 12:12:48 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <fcntl.h>
# include <unistd.h>
#endif

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
	write(fd, "\n", 1);
}

#ifdef TEST

int	main(void)
{
	char	s[12];

	ft_strlcpy(s, "Hello 42!", 12);
	ft_putendl_fd(s, 1);
	ft_putendl_fd("End line test", 1);
	return (0);
}
#endif
