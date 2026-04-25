/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:52:14 by amakino           #+#    #+#             */
/*   Updated: 2026/04/23 18:36:56 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				s_len;
	unsigned char	target;

	s_len = ft_strlen(s);
	target = c;
	while (s_len >= 0)
	{
		if (s[s_len] == target)
		{
			return ((char *)&s[s_len]);
		}
		s_len--;
	}
	return (NULL);
}
