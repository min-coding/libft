/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:53:58 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/26 13:53:59 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
	//receive pointer to head node 
	//if there's no node, return NULL
    if (!lst)
		return (NULL);

	//if there's an address in the first node, make lst point to the node.next of the latter node until lst->next is NULL
	while (lst->next)
		lst = lst->next;

	return (lst);
}
