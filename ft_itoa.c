/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:29:52 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 23:18:12 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>

char *ft_itoa(int n)
{
  char *result;
  int temp;
  int len;

  temp = n;

  if (n < 0 || n == INT_MIN)
  {
    temp = n * -1;
  }

  len = 1;

  // create a loop to check digit
  while (temp / 10 >= 1)
  {
    /* code */
    temp = temp / 10;
    len++;
  }

  int sum;
  if (n < 0)
  {
    result = malloc(sizeof(*result) * (len + 2));
    result[0] = '-';
    result[len + 1] = '\0';
    sum = len;
  }
  else
  {
    result = malloc(sizeof(*result) * (len + 1));
    result[len] = '\0';
    sum = len - 1;
  }

  while (temp % 10 >= 0 && len >= 1)
  {
    /* code */
    result[sum] = abs(n) % 10 + '0';
    len--;
    sum--;
    n = n / 10;
  };

  return result;
}

// int main()
// {
// //   char *str = ft_itoa(0);
// //   char *str = ft_itoa(-1);
// // char *str = ft_itoa(-2147483647);
//   char *str = ft_itoa(INT_MIN);
//   //   char *str = ft_itoa(1234);
//   //   char *str = ft_itoa(-1234);
//   printf("%s\n", str);

//   free(str);
//   return 0;
// }