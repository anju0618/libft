/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:14:34 by amakino           #+#    #+#             */
/*   Updated: 2026/04/25 10:48:50 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST
# include <stdio.h>
#endif

#include "libft.h"

static size_t	get_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	num = n;
	len = get_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

#ifdef TEST

int	main(void)
{
	char	*res;

	res = ft_itoa(-2147483648);
	printf("INT_MIN: %s\n", res);
	free(res);
	res = ft_itoa(2147483647);
	printf("INT_MAX: %s\n", res);
	free(res);
	res = ft_itoa(0);
	printf("Zero   : %s\n", res);
	free(res);
	return (0);
}
#endif
