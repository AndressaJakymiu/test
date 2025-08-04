/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves- <analves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:57:19 by analves-          #+#    #+#             */
/*   Updated: 2025/07/23 19:41:22 by analves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free(char **strs, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int	ft_words(char const *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str == c)
		str++;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			count++;
			x = 1;
		}
		else if (*str == c)
		{
			x = 0;
		}
		str++;
	}
	return (count);
}

int	word_len(char const *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len++;
		}
		else if (str[i] == c)
			break ;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**total;
	int		i;
	int		j;

	total = ft_calloc((ft_words(s, c) + 1), sizeof(char *));
	if (!total)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			total[j] = ft_substr(s, i, word_len(&s[i], c));
			if (!total[j])
				return (ft_free(total, j));
			j++;
			i += word_len(&s[i], c);
		}
		else
			i++;
	}
	total[j] = 0;
	return (total);
}
