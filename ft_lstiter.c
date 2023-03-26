/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:37:26 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/26 18:37:29 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    //lst id a pointer to a node,starting from the first

    //pointer current is pointing to the first node
    t_list *current = lst;

    //pointer next 
    t_list *next;

    while(current){
        //next is pointing to first node next.
        next = current->next;
        //apply function f on content of each node
        f(current->content);
        current = next;
    }

    //pointer lst is now pointing to the last node
    lst = NULL;
}

