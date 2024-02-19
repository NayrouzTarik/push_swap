/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 17:55:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"

int check_dup(t_list *list) 
{
    t_list *current = list;
    t_list *compare;

    while (current != NULL) 
    {
        compare = current->next;
        while (compare != NULL) 
        {
            // printf("Comp %d and %d\n", current->value, compare->value);
            if (current->value == compare->value) 
            {
                // printf("Dup found: %d\n", current->value);
                return 1; // Found a dup
            }
            compare = compare->next;
        }
        current = current->next;
    }
    // printf("No dups.\n");
    return 0;
}
