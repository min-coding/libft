/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:12:21 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/20 17:12:23 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <errno.h> 
#include <string.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t	i;
	size_t	j;
    size_t  last;
	char	*str;
    
    last = ft_strlen(s) ;

    // if letter to copy is more than the whole thing
    //if start is after last index of last
    if (start > last) {
        //return null
        return ft_strdup("");
    }

    else if(start + len >= last){
        // return only to the last index, therefore malloc only start to end + 1
        str = (char*)malloc(sizeof(*s) * ((last-start) + 1));
    }

    //normal case, allocate len given + null
    else
    {
	    str = (char*)malloc(sizeof(*s) * (len + 1));
    }
	if (!str){
		return (NULL);
    }
	i = 0;
	j = 0;

//if it's not the end of the string 

	while (s[i])
	{
 //   this condition starts, at the start of substr and end at len
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
    }

// null terminate the last index

	str[j] = 0;
	return (str);
}

// int main(void){
//     char * s = ft_substr("tripouille", 0, 100);
//     int cmp = strcmp(s, "");

//     printf("%s\n", s);
//     printf("%d",cmp);

//     free(s); // free the memory allocated by ft_substr

//     return 0;
// }

