/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:23:49 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/20 16:23:51 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <errno.h> 
#include <string.h>

char * ft_strdup(const char *s1)
{
    int strlen1 = ft_strlen(s1);
    char *ptr;

    //allocate the length of string + null term
    ptr = ft_calloc(strlen1 + 1,sizeof(*ptr));

    if(!ptr)
    {
    errno = ENOMEM;
    return 0;
    }

    ft_memcpy(ptr,s1,strlen1);
    
    ptr[strlen1] = '\0';

    return ptr;
}
/**
 * 
 * 
The strdup() function 
1.allocates sufficient memory for a copy of the string s1
2.does the copy, and 
3. returns a pointer to it.  

The pointer may
     subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to
     ENOMEM.

     The strndup() function copies at most n characters from the string s1
     always NUL terminating the copied string.
*/
 