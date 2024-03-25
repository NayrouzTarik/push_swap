/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorth_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntarik <ntarik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:46:25 by ntarik            #+#    #+#             */
/*   Updated: 2024/03/24 21:39:25 by ntarik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorth_four(t_list ***stack_a , t_list ***stack_b)
{
    ft_pb(*stack_a, *stack_b);
    sorting_tree(stack_a, stack_b);
    ft_pa(*stack_a,*stack_b);
    return ;
}