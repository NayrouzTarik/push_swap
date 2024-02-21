/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:59:21 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 17:59:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void exit_error(void) 
{
    ft_putstr_fd("Error sss\n", 1);
    exit(EXIT_FAILURE);
}

// t_list *parsing(int ac, char **av) 
// {
//     t_list *list = NULL;
//     int value;
//     int i = 1; 

//     while (i < ac) 
//     {
//         if (!is_valid_number(av[i]))
//         {
//             printf("wa zmr rah just integers\n");
//             exit(0);
//         }
//         value = ft_atoi(av[i]);        
//         t_list *new_node = ft_lstadd(value);
//         if (!new_node) 
//             exit_error(); 
//             // printf("Adding to list: %d\n", value);

//         ft_lstadd_first(&list, value);
//         i++; 
//     }
//     if (check_dup(list)) 
//     {
//         printf("Duplicates found.\n");
//     } 
//     else 
//     {
//         printf("No dups\n");
//     }
//     print_list(list);
//     return list; 
// }

t_list *parsing(int ac, char **av) 
{
    t_list *list = NULL;
    int value;
    int i = 1;

    while (i < ac) 
    {
        value = ft_atoi(av[i]);
        if (value == 0)
        {
            printf("Error\n");
            exit(0);
        }
        if (exists_in_list(list, value))
        {
            ft_putstr_fd("Duplicates \n", STDERR_FILENO);
            exit(EXIT_FAILURE);
        }
        t_list *new_node = ft_lstadd(value); 
        if (!new_node) 
            exit_error();

        ft_lstadd_last(&list, value); 
        i++;
    }
    print_list(list);
    return list;
}

void print_list(t_list *list) 
{
    t_list *current = list;
    printf("List:\n");
    while (current != NULL) 
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

#include "push_swap.h"
#include "./libft/libft.h"

int main(int argc, char **argv) 
{
    if (argc > 1) 
    {
        t_list *stack_a = parsing(argc, argv); 
        t_list *stack_b = NULL;

        //manually till i work on pa 
            stack_b = ft_lstadd(1); 
            t_list *node_b = ft_lstadd(2);
            stack_b->next = node_b;
            t_list *node_bi = ft_lstadd(4);
            node_b->next = node_bi;
    
        printf("== Before ==\n");
        print_list( stack_a); 
        print_list( stack_b); 
        // ft_ss(&stack_a, &stack_b); 

        // printf("\n== After SS ==\n");
        // print_list( stack_a);
        // print_list(stack_b);

        // printf("AFTER PA ==\n");
        // ft_pa(&stack_a, &stack_b);
        // print_list(stack_a);
        // print_list(stack_b);

        // printf("AFTER PB ==\n");
        // ft_pb(&stack_a, &stack_b);
        // print_list(stack_a);
        // print_list(stack_b);

        // printf("AFTER RRA ==\n");
        // ft_rra(&stack_b, 1);
        // print_list(stack_b);
        // printf("AFTER RRB ==\n");
        // ft_rrb(&stack_b, 1);
        // print_list(stack_b);
        // printf("testing RRR \n");
        // ft_rrr(&stack_a, &stack_b);
        // print_list(stack_a);
        // print_list(stack_b);

        // printf("AFTER RA AND RB\n");
        // ft_ra(&stack_a, 1);
        // print_list(stack_a);
        // ft_rb(&stack_b, 1);
        // print_list(stack_b);
        // printf("after RR\n");
        // ft_rr(&stack_a, &stack_b);
        // print_list(stack_a);
        // print_list(stack_b);
    }
    return 0;
}


// int main()
// {
//     char buff[] = "137 ++1 nsgtsrf1";
//     int value = ft_atoi(buff);
//     printf("%d\n", value);
// }