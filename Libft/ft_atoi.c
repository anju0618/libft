/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakino <amakino@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:26:23 by amakino           #+#    #+#             */
/*   Updated: 2026/04/24 15:18:40 by amakino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef TEST
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>
#endif

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	value;
	int					sign;

	i = 0;
	sign = 1;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		if (value > 9223372036854775807ULL && sign == 1)
			return (-1);
		if (value > 9223372036854775808ULL && sign == -1)
			return (0);
		i++;
	}
	return (value * sign);
}

#ifdef TEST

int	main(void)
{
	char	*big_num;
	char	*huge_num;

	big_num = "2147483747";
	huge_num = "9223372036854775806";
	printf("%d\n", ft_atoi("2147483747"));
	printf("%d\n", atoi("2147483747"));
	printf("%d\n", ft_atoi(huge_num));
	printf("%d\n", atoi(huge_num));
	printf("%d\n", ft_atoi("  aa-1234love"));
	printf("%d\n", atoi("  aa-1234love"));
	return (0);
}
#endif
