/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:40:58 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/26 19:41:00 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    //we need to return a new list that is already modified by f function
    
    //lst = address of pointer to node
    //del = address of function to delete the content of a node if needed

    //pointer to pointer that points to start node
    t_list *current = lst;
    t_list *next;

    //first new node/list
    t_list *new_list;
    t_list *new_node;

    new_list = NULL;
    //if current is valid, which means lst is valid, keep moving
    while(current){
        //save where the current address is pointing too, so we can move there
        next = current->next;

        //create new node as you iterate, which the content in that node is modified by the given function
        new_node = ft_lstnew(f(current->content));
        
        //if allocation fails
        if (!new_node) {
            ft_lstclear(&new_node,del);
            return NULL;
        }

        //if allocation succeed, add it to the back of new_list
        ft_lstadd_back(&new_list,new_node);
        //update the current to next node by assigning 
        current = next; 
    }
    return new_list;
}
