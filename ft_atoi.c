/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:24:28 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 13:47:05 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_atoi(const char *str)
{
  int i;
  int sign;
  int result;

  sign = 1;
  i = 0;
  result = 0;

  while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    i++;
  while (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
      sign *= -1;
    i++;
  }
  while (str[i] >= 48 && str[i] <= 57)
  {
    // real number in int = char number into ascii number - 48
    result = result * 10 + str[i] - '0';
    i++;
  }
  return (sign * result);
}

int main(void)
{
  char a[] = "char -+-123abc444";

  printf("%s\n", a);
  printf("%d\n", ft_atoi(a));
}