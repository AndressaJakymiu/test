/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves- <analves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:56:20 by analves-          #+#    #+#             */
/*   Updated: 2025/07/23 19:34:32 by analves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	unsigned char		*src1;

	dest1 = ((unsigned char *)dest);
	src1 = ((unsigned char *)src);
	if (!dest && !src)
		return (NULL);
	if (dest1 < src1)
	{
		return (ft_memcpy(dest1, src1, n));
	}
	else
	{
		while (n--)
		{
			dest1[n] = src1[n];
		}
	}
	return (dest);
}
