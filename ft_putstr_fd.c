/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:21:54 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 22:36:11 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"


void ft_putstr_fd(char *s,int fd)
{
  int i;
  i = 0;
  while (s[i] != '\0')
  {
    write(fd, (s + i), 1);
    i++;
  }
}

// int main(){
//   ft_putstr_fd("Hello", 1);
//   return 0;
// }
