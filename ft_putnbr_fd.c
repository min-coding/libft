/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:58:52 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 23:15:38 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n,int fd)
{
  char *num;
  num = ft_itoa(n);

  int i;
  i = 0;
  while (num[i] != '\0')
  {
    write(fd, (num + i), 1);
    i++;
  }
}

// int main(){
//   ft_putnbr_fd(-42, 1);
//   ft_putnbr_fd(0, 1);
//   return 0;
// }