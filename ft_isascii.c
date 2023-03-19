/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:26:30 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 18:28:44 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_isascii(int c)
{
    return (c >= 000 && c <= 177);
}

// int main()
// {
//   printf("%d is the result\n", ft_isascii('Z'));
//   printf("%d is the result\n", ft_isascii('漢'));
// }
