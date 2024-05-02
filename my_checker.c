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

// int check_dup(t_list *list) 
// {
//     t_list *current = list;
//     t_list *compare;

//     while (current != NULL) 
//     {
//         compare = current->next;
//         while (compare != NULL) 
//         {
//             // printf("Comp %d and %d\n", current->value, compare->value);
//             if (current->value == compare->value) 
//             {
//                 // printf("Dup found: %d\n", current->value);
//                 return 1; // Found a dup
//             }
//             compare = compare->next;
//         }
//         current = current->next;
//     }
//     // printf("No dups.\n");
//     return 0;
// }

size_t ft_atoi(const char *str)
{
    int i;
    int signe;
    int res;

    i = 0;
    signe = 1;
    res = 0;
    while (str[i] == ' ' && str[i])
    {
        i++;
    }
    if (str[i] == '-')
    {
        signe = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            res = (res * 10) + str[i] - '0';
        }
        else
            break;
        i++;
    }
    return (res * signe);
}

int exists_in_list(t_list *list, int value)
{
    t_list *current = list;
    while (current != NULL)
    {
        if (current->value == value) 
            return (1); 
        current = current->next;
    }
    return (0); 
}

void signed_and_number(char *str)
{
    int i = 0;
    if (ft_isdigit(str[i]))
    {
        i++;
        if ((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1]))
        {
            write(1, "Error\n", 6);
            exit(EXIT_FAILURE);
        }
    }
}
