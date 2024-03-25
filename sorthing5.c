/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorthing5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntarik <ntarik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:10:12 by ntarik            #+#    #+#             */
/*   Updated: 2024/03/25 01:27:15 by ntarik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorting_five(t_list ***stack_a, t_list ***stack_b)
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
    sorth_four(stack_a, stack_b);
    ft_pa(*stack_a, *stack_b);
    ft_pa(*stack_a, *stack_b);
}