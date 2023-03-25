/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend1_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:31:18 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 23:16:35 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <limits.h>

void ft_putend1_fd(char *s,int fd)
{
  int i;
  i = 0;
  // char *nl = NULL;
  // *nl = '\n';

  while (s[i] != '\0')
  {
    write(fd, (s + i), 1);
    i++;
  }
  write(fd, "\n", 1);
}

// int main(){
//   // ft_putend1_fd("Hello", 1);
//   ft_putend1_fd((char *)"42", 1);
//   return 0;
// }