/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorthing_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntarik <ntarik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:27:10 by ntarik            #+#    #+#             */
/*   Updated: 2024/03/25 01:43:19 by ntarik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorting_tree(t_list ***stack_a , t_list ***stack_b)
{
    t_list **a;
    t_list **b;
    t_list **c;
    
    a = &(**stack_a);
    b = &(**stack_a)->next;
    c = &(**stack_a)->next->next;
    if (((*a)->value < (*b)->value) && ((*b)->value < (*c)->value) && ((*a)->value < (*c)->value))
    {
        return;
    }
    else if (((*a)->value > (*b)->value) && ((*b)->value > (*c)->value) && ((*a)->value > (*c)->value))
    {
        ft_sa((*stack_a), 1);
        ft_rra((*stack_a), 1);
        printf("sa \n rra\n");
        return ;
    }
    else if ( ((*a)->value < (*b)->value) && ((*b)->value > (*c)->value) && ((*c)->value > (*a)->value))
    {
        ft_pb((*stack_a), (*stack_b));
        ft_ra((*stack_a), 1);
        ft_pa((*stack_a), (*stack_b));
        printf("pb\nra\npa\n");
        return ;
    }
   else if ( ((*a)->value < (*b)->value) && ((*b)->value > (*c)->value) && ((*c)->value < (*a)->value))
   {
        ft_rra((*stack_a), 1);
        printf("rra\n");
        return ;
   }
   else if (((*a)->value > (*b)->value) && ((*b)->value > (*c)->value) && ((*a)->value > (*c)->value))
   {
       ft_sa((*stack_a), 1);
       ft_rra((*stack_a), 1);
       printf("sa\nrra\n");
       return ;
   }
   else if ((((*a)->value > (*b)->value) && ((*b)->value < (*c)->value) && ((*a)->value < (*c)->value)))
   {
        ft_sa((*stack_a), 1);
        printf("ra\n");
        return ;
   }
}