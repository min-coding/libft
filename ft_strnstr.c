/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:43:19 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/18 18:11:34 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//needle search in len of haystack

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (!*needle) {
        return (char *)haystack;
    }

    if (len == 0) {
        return NULL;
    }

    while (*haystack && len > 0) {
        const char *haystack_tmp = haystack;
        const char *needle_tmp = needle;
        size_t matched_len = 0;

        while (haystack_tmp[matched_len] == needle_tmp[matched_len] && (matched_len < len)) {
            matched_len++;

            if (!needle_tmp[matched_len]) {
                return (char *)haystack;
            }
        }
        haystack++;
        len--;
    }

    return NULL;
}

// int main()
// {
//   char *haystack = "Eeny meeny miny moe!";
//   char *needle = "meeny";
//   char *location;

//   location = ft_strnstr(haystack, needle, 15);
//   if (location == NULL)
//     printf("Can't find '%s' within %d characters of '%s'\n",
//            needle,
//            15,
//            haystack);
//   else
//     printf("Found '%s' within %d characters of '%s'\n",
//            needle,
//            15,
//            haystack);

//   return (0);
// }

