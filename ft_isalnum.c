/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:26:23 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/16 17:00:45 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_isalnum(int c)
{
  return (ft_isalpha(c) || ft_isdigit(c));
}

// int main()
// {
//   printf("The result is %d\n", ft_isalnum('9'));
//   printf("The result is %d\n", ft_isalnum('c'));
//   printf("The result is %d\n", ft_isalnum('J'));
//   printf("The result is %d\n", ft_isalnum(' '));
//   printf("The result is %d\n", ft_isalnum('='));
// }
