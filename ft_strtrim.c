/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:23:34 by amakino           #+#    #+#             */
/*   Updated: 2026/04/24 15:53:02 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <stdio.h>
#endif

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

#ifdef TEST

int	main(void)
{
	char	*res;

	res = ft_strtrim("   Hello 42   ", " ");
	printf("Test 1: [%s]\n", res);
	free(res);
	res = ft_strtrim("123123abc321", "123");
	printf("Test 2: [%s]\n", res);
	free(res);
	res = ft_strtrim("aaaaa", "a");
	printf("Test 3: [%s]\n", res);
	free(res);
	return (0);
}
#endif
