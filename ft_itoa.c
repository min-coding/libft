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

//checking how many digits there are
static size_t	count_digits(int n)
{
	size_t	i;

	i = 1;

  	while (n /=10)
		i++;

  // n = n/10;
	// while (n)
  // {
	// 	i++;
  //   n = n/10;
  // }
  
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
  //long int to handle intmax,min
	long int	num;

	num = n;
	digits = count_digits(n);

  //if n is negative, make it positive
	if (n < 0)
	{
		num *= -1;
    //added 1 digit because of '-' sign
		digits++;
	}
	if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);

  //set last char to Null
	*(str_num + digits) = '\0';

  //adding number backwards, stops when digits = 0
  // for
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
  // digits--;
  // while (digits)
	// {
	// 	*(str_num + digits) = num % 10 + '0';
	// 	num = num / 10;
  //   digits--;
	// }

//if it's a negative number, the digits is already allocated 1 more than the positive. Since we filled the number backwards, the remaining space will be the first index (for neg)
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}

// int main()
// {
// //   char *str = ft_itoa(0);
// //   char *str = ft_itoa(-1);
// char *str = ft_itoa(-2147483648);
//   // char *str = ft_itoa(INT_MIN);
//     // char *str = ft_itoa(1234);
//     // char *str = ft_itoa(-1234);
//   printf("%s\n", str);

//   free(str);
//   return 0;
// }