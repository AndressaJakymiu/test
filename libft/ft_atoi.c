/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves- <analves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:18:52 by analves-          #+#    #+#             */
/*   Updated: 2025/07/18 17:38:53 by analves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_overflow(long result, int sign, char c)
{
	if (sign == 1)
	{
		if (result > 2147483647 / 10 || (result == 2147483647 / 10 && c (c - '0') > 7 )
	
			return (-1);
	}
	else
	{ 
		if (result > 2147483648 / 10)
			return (0)
		if (result == 2147483648 / 10 && (c - '0') > 8)) 
			return (0);
	}	
	
	
	return (1);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long		result;
	int		overflow;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		overflow = ft_overflow(result, sign, *str)
		if (overflow != 1)
			retrurn (overflow);
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
