/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:04:48 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 18:29:23 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_tolower(int c)
{
  if(c >= 'A' && c <= 'Z')
  {
    return (c + 32);
  }
  else
  {
    return (c);
  }
}

// int main()
// {
//   printf("%c is returned\n", ft_tolower((unsigned char)'y'));
//   printf("%c is returned\n", ft_tolower((unsigned char)'T'));
//   printf("%c is returned\n", ft_tolower((unsigned char)'A'));
//   printf("%c is returned\n", ft_tolower((unsigned char)'0'));
//   printf("%c is returned\n", ft_tolower((unsigned char)'$'));
//   return (0);
// }
