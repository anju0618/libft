/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:38:09 by amakino           #+#    #+#             */
/*   Updated: 2026/04/25 10:52:45 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef TEST
# include <stdio.h>
#endif

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**free_all(char **res, size_t i)
{
	while (i > 0)
		free(res[--i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = get_word_len(s, c);
			res[i++] = ft_substr(s, 0, len);
			if (!res[i - 1])
				return (free_all(res, i - 1));
			s += len;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

#ifdef TEST

int	main(void)
{
	char	**res;
	size_t	i;

	res = ft_split(",,,,Hello,,42,world,,,,", ',');
	i = 0;
	if (!res)
		return (1);
	while (res[i])
	{
		printf("word[%zu]: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
#endif
