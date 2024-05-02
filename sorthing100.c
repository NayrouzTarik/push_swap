/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorthing100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntarik <ntarik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:21:56 by ntarik            #+#    #+#             */
/*   Updated: 2024/05/02 16:24:37 by ntarik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max(t_list **stack)
{
    t_list *tmp;
    int max;

    tmp = *stack;
    max = tmp->value;
    while (tmp)
    {
        if (tmp->value > max)
            max = tmp->value;
        tmp = tmp->next;
    }
    return (max);
}

void merge_sort(t_list **stack_a, t_list **stack_b, int size)
{
    int max;
    int i;

    i = 0;
    while (i < size)
    {
        if ((*stack_a) == NULL || (*stack_a)->next == NULL) 
        {
            ft_pb(stack_a, stack_b);
            i++;
            continue;
        }
        max = find_min(stack_a);
        if ((*stack_a)->value == max)
        {
            ft_pb(stack_a, stack_b);
        }
        else
        {
            while ((*stack_a)->value != max && (*stack_a)->next != NULL) 
            {
                ft_rra(stack_a, 1); 
            }
            if ((*stack_a)->value == max && ft_lstsize(*stack_a) != 1)
            {
                ft_pb(stack_a, stack_b);
            }
        }
        i++;
        merge_sort(stack_a, stack_b, size - 1);
    }
    return;
}

void sorth_upper_than_one_hundred(t_list **stack_a, t_list **stack_b)
{
    int size;

    size = ft_lstsize(*stack_a);
    merge_sort(stack_a, stack_b, size);
    while (*stack_b)
    {
        printf("pa\n");
        ft_pa(stack_a, stack_b);
    }
}
