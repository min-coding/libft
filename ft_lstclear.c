/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:57:02 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/26 17:57:03 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!del || !lst || !*lst)
        return;

    //now current is pointing to where lst is pointing which is the beginning of the list
    t_list *current = *lst;

    // create next node
    t_list *next;

    //if there's a node beginning of the list
    while (current)
    {
    //call del on its content, free the node, and set the node pointer to NULL.

    //keep the next node address before deleting it
        next = current->next;
        del(current->content);
        free(current);
    //the next node address that we saved, is now the next node that we go to, so current = next
        current = next;
    }

    *lst = NULL;
}
/*
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("\n");
}

void free_int(void *ptr)
{
    free(ptr);
}
int main(void)
{
    // Test 1: Empty list
    t_list *list1 = NULL;
    ft_lstclear(&list1, &free_int);
    printf("List 1: ");
    print_list(list1); // expected output: List 1:

    // Test 2: Single node list
    int *num2 = malloc(sizeof(int));
    *num2 = 2;
    t_list *list2 = ft_lstnew(num2);
    ft_lstclear(&list2, &free_int);
    printf("List 2: ");
    print_list(list2); // expected output: List 2:

    // Test 3: Multi-node list
    int *num3_1 = malloc(sizeof(int));
    int *num3_2 = malloc(sizeof(int));
    int *num3_3 = malloc(sizeof(int));
    *num3_1 = 1;
    *num3_2 = 2;
    *num3_3 = 3;
    t_list *list3 = ft_lstnew(num3_1);
    ft_lstadd_back(&list3, ft_lstnew(num3_2));
    ft_lstadd_back(&list3, ft_lstnew(num3_3));
    ft_lstclear(&list3, &free_int);
    printf("List 3: ");
    print_list(list3); // expected output: List 3:

    return 0;
}*/
