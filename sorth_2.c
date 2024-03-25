/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorth_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntarik <ntarik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:38:16 by ntarik            #+#    #+#             */
/*   Updated: 2024/03/24 21:22:56 by ntarik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorth_two(t_list ***stack_a , t_list ***stack_b)
{
    t_list **a;
    t_list **b;
    
    a = &(**stack_a);
    b = &(**stack_a)->next;
    if ((*a)->value > (*b)->value)
    {
        ft_sa((*stack_a), 0);
        printf("sa");
        return ;
    }
    else if ((*a)->value < (*b)->value)
    {
        return ;
    }
}