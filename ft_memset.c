/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:40:04 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 17:50:14 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
  unsigned char *buf = (unsigned char *)str;

  size_t i;
  i = 0;
  while (i < len)
  {
    buf[i] = (unsigned char)c;
    i++;
  }
  return str;
}

// int main()
// {
//   char arr[30] = "Hellooooooooooo Worrrrrllld";

//   ft_memset(arr, '$', 7);
//   for (size_t i = 0; i < sizeof(arr); ++i)
//   {
//     printf("%c", arr[i]);
//   }

//   return (0);
// }