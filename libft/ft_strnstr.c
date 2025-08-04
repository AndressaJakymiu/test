/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves- <analves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:19:31 by analves-          #+#    #+#             */
/*   Updated: 2025/07/18 18:55:50 by analves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *text, const char *word, size_t n)
{
	size_t	i;
	size_t	j;

	if (*word == '\0')
		return ((char *)text);
	i = 0;
	while (text[i] && i < n)
	{
		j = 0;
		while (word[j] && text[i + j] && (i + j) < n && text[i + j] == word[j])
			j++;
		if (word[j] == '\0')
			return ((char *)(text + i));
		i++;
	}
	return (NULL);
}
