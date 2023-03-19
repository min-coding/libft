/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:16:27 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/15 21:02:32 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_isdigit(int c)
{
  return (c >= '0' && c <= '9');
}

// int main()
// {
//   printf("The Result : %d\n", ft_isdigit('0'));
//   printf("The Result : %d\n", ft_isdigit('B'));
// }