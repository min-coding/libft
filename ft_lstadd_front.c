/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:45:47 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/24 19:09:45 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void ft_lstadd_front(t_list **lst,t_list *new)
//**lst is a pointer to head node
{
  //from new->next = NULL, to new->next=head node (*lst)
  new->next = *lst;

  //update head pointer.pointer to head now point to new(address) of new node
  *lst = new;
}