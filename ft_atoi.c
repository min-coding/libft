/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:24:28 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 16:34:22 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//The atoi() function converts the initial portion of the string pointed to by str to int representation.

int ft_atoi(const char *str)
{
  int i;
  int sign;
  int result;

//set a sign to pos 
  sign = 1;
  i = 0;

  //number
  result = 0;

//if the letter is alpha, space, tab -> skip it
  while (str[i] == ' ' || str[i] == 0 || str[i] == '\t' || ((str[i] >= 9 && str[i] <=13)))
    i++;

//only move i if there's a sign
  if (str[i] == '-')
  {
      sign *= -1;
      i++;
  }
  else if(str[i] == '+')
  {
    i++; 
  }

//if there's another one after it 
  if (str[i] == '-' || str[i] == '+')
      return 0;

  //if it's 0-9 consecutively
  while (str[i] >= 48 && str[i] <= 57) 
  {
    //we need result * 10, so that
    result = result * 10 + str[i] - '0';
    i++;
  }

  return (sign * result);
}

// int main(){
//   //1
//   printf("%d\n",ft_atoi("\n\v\f\r 1"));
//   //1
//   printf("%d\n",ft_atoi("1"));
//   //101
//   printf("%d\n",ft_atoi("+101"));
//   return 0;
// }

//1,10,16