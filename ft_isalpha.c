/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:09:03 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 18:28:40 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_isalpha(int c){
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main()
// {
//   printf("This is a result %d\n", ft_isalpha('A'));
//   printf("This is a result %d\n", ft_isalpha('9'));
// }