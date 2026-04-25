/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:52:13 by amakino           #+#    #+#             */
/*   Updated: 2026/04/24 11:21:39 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <stdio.h>
#endif

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

#ifdef TEST

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "42";
	b = "Tokyo";
	c = ft_strjoin(a, b);
	printf("%s\n", c);
	free(c);
	return (0);
}
#endif
