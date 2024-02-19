/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linkedlist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:23:39 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 17:23:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list* ft_lstadd(int value)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) 
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
    new_node->value = value; 
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void ft_lstadd_first(t_list **list, int value) 
{
    t_list *newnode = ft_lstadd(value); 
    newnode->prev = NULL;
    newnode->next = (*list);
    if (*list != NULL)
        (*list)->prev = newnode;
    (*list) = newnode;
}

void ft_lstadd_last(t_list **lst, int value) 
{
    t_list *newnode = ft_lstadd(value);
    if (*lst == NULL) 
    {
        newnode->prev = NULL;
        *lst = newnode; 
        return;
    }
    t_list *last = *lst;
    while (last->next != NULL)
        last = last->next;
    last->next = newnode;
    newnode->prev = last;
    newnode->next = NULL;
}

void deleteNode(t_list **list, t_list *del) 
{
    if (*list == NULL || del == NULL) 
        return; 
    if (*list == del) 
        *list = del->next; 
    if (del->next != NULL) 
        del->next->prev = del->prev; 
    if (del->prev != NULL) 
        del->prev->next = del->next; 
    free(del); 
}

int ft_lstsize(t_list *list)
{
    int count = 0;
    if (!list) 
        return 0;
    while (list != NULL)
    {
        count++;
        list = list->next;
        }
    return count;
}
