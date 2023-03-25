/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:40:46 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/21 00:40:55 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int j;
    int k;
    int s1len;

    s1len = ft_strlen(s1);
    //set
    i = 0;

    //s1
    j= 0;

    //for remove
    k = 0;

    if(!s1 || !set)
    {
        return NULL;
    }


    while(set[i] != '\0'){
        j = 0;
        while(s1[j] != '\0'){
            //if the letter in set,match the letter in j
            if (s1[j] == set[i]) {
                //moving 1 block fwd, from 1 block behind, for the rest of the string after
                //if the size gets smaller because first 2 blocks will overlap.
                // ft_memmove((char *)(s1+j),(s1+j+1),(s1len-j));
                k = 0;
                while(k < s1len){
                    /* code */
                    s1 = &s1[k + 1];
                    k++;
                }
                s1len--;
                str = malloc((s1len+1)*sizeof(*s1));
                if(!str)
                {
                    return NULL;
                }
            }
            j++;
        }
        i++;
    }
    return str;
}