/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 22:58:52 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 23:15:38 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
		nbr = n;

  //keeps looping until find a base case (nbr <= 9)
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);

  //Base case. + '0' to turn it into char.
	ft_putchar_fd(nbr % 10 + '0', fd);
}

// int main(){
//   ft_putnbr_fd(-42, 1);
//   // ft_putnbr_fd(0, 1);
//   return 0;
// }