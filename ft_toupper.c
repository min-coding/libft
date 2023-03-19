/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:55:04 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 18:29:26 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
  if(c >= 'a' && c <= 'z')
  {
    return (c - 32);
  }
  else
  {
    return c;
  }
}

// int main()
// {
//   printf("%c is returned\n", ft_toupper((unsigned char)'y'));
//   printf("%c is returned\n", ft_toupper((unsigned char)'T'));
//   printf("%c is returned\n", ft_toupper((unsigned char)'0'));
//   printf("%c is returned\n", ft_toupper((unsigned char)'$'));
//   return (0);
// }
