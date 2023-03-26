/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:54:13 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/26 12:54:16 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>


int ft_lstsize(t_list *lst)
{
    int i;
    i = 0;

    if(lst == 0)
        return 0;

    while(lst != NULL){
        i++;
        lst = lst->next;
    }
    return i;
}
/*
typedef struct s_list
{
    void *content;
    struct s_list *next;
}               t_list;
*/