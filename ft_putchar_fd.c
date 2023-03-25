/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:16:21 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 22:33:48 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c,int fd)
{
  write(fd, &c, 1);
}

// int main(){
//   // ft_putchar_fd('H', 1);
//   ft_putchar_fd(0,1);
//   return 0;
// }
