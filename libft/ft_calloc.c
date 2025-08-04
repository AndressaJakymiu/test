/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves- <analves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:38:47 by analves-          #+#    #+#             */
/*   Updated: 2025/07/18 19:05:17 by analves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*prt;

	total = count * size;
	prt = malloc(total);
	if (!prt)
		return (NULL);
	ft_bzero(prt, total);
	return (prt);
}
