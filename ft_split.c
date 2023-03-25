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


/*
count number of words in s.

1. check only the FIRST letter of the word. By saying if s[i] != delim, then it's a start of a word. 

2. when you get the FIRST letter of the nth word, loop until s[i] == c again

*/
static int	ft_count_word(char const *s, char c)
{
	int i;
	int word;

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

char		**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**arr;
	int		size;
	int		j;

	i = 0;
	j = 0;

	//find out how many word to allocate the arr
	word = ft_count_word(s, c);

	//allocate arr of word with number of words * size of each word (string)
	arr = (char **)malloc((word + 1) * sizeof(char *));

	if (!arr)
		return (NULL);

	// counting word
	while (j < word)
	{
		//skip if it's a delim
		while (s[i] == c)
			i++;
		//if it's a letter, find the size of a word
		size = ft_size_word(s, c, i);

		//assign a substring to arr. 
		arr[j] = ft_substr(s, i, size);

		// if it's null, then free the allocated space for the word, letter by letter
		if (!(arr[j]))
		{
			ft_free(arr, j);
			return (NULL);
		}

		// skip the whole word, we continue on the end of the word
		i += size;
		j++;
	}
	arr[j] = 0;
	return (arr);
}


// int main()
// {
//   char **str;
// //   str = ft_split("  tripouille  42  ", ' ');
//   str = ft_split("tripouille", 0);

//   for (int i = 0; str[i] != NULL; i++)
//   {
//     printf("%s\n", str[i]);
//   }

//   // Free the memory allocated for the array and its elements
//   for (int i = 0; str[i] != NULL; i++)
//   {
//     free(str[i]);
//   }
//   free(str);

//   return 0;
// }