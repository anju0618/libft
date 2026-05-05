/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:26:28 by amakino           #+#    #+#             */
/*   Updated: 2026/04/25 11:43:17 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <stdio.h>

void	f(unsigned int i, char *c)
{
	(void)i;
	*c += 1;
}
#endif

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#ifdef TEST

int	main(void)
{
	char	c[8];

	ft_strlcpy(c, "42Tokyo", 8);
	ft_striteri(c, f);
	printf("%s\n", c);
	return (0);
}
#endif
