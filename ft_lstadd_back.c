/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:10:15 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/26 14:10:17 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void ft_lstadd_back(t_list **lst,t_list *new)
//**lst is a pointer to head node
{
    //create pointer to point to last node	
	t_list *last;

    //last node address to `last` pointer
	last = ft_lstlast(*lst);

    //if last node address is not NULL, change the it's address to the new added node address
	if (last)
		last->next = new;
		
    //if there's no last node, which means there's only 1 node, then just set the new head to new
	else
		*lst = new;
}
