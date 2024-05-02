/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorth_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntarik <ntarik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:46:25 by ntarik            #+#    #+#             */
/*   Updated: 2024/03/25 01:42:15 by ntarik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(t_list **stack)
{
    t_list *tmp;
    int min;

    tmp = *stack;
    min = tmp->value;
    while (tmp)
    {
        if (tmp->value < min)
            min = tmp->value;
        tmp = tmp->next;
    }
    return (min);
}
void sorth_four(t_list ***stack_a , t_list ***stack_b)
{
    int min = find_min(*stack_a);
    while ((**stack_a)->value != min)    
    {
        if ((**stack_a)->next->value == min)
            ft_sa(*stack_a, 0);
        else
            ft_ra(*stack_a, 0);
    }
    ft_pb(*stack_a, *stack_b);
    sorting_tree(stack_a, stack_b);
    ft_pa(*stack_a, *stack_b);
    return ;
}