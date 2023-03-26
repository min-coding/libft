/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:19:45 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/22 18:49:00 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

/*
checking number of character in a word by
1. if s[i] isn't a delim, and s[i] is valid. (then it's some letter),
	count it
*/

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}


static void	ft_free(char **arr, int j)
{
	while (j > 0)
	{
		free(arr[j]);
		j--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;
	int		size;
	int		j;

	i = 0;
	j = 0;
	arr = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	while (j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		arr[j] = ft_substr(s, i, size);
		if (!(arr[j]))
		{
			ft_free(arr, j);
			return (NULL);
		}
		i += size;
		j++;
	}
	arr[j] = 0;
	return (arr);
}
