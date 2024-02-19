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
    ft_putstr_fd("Error\n", 1);
    exit(EXIT_FAILURE);
}

t_list *parsing(int ac, char **av) 
{
    t_list *list = NULL;
    int value;
    int i = 1; 

    while (i < ac) 
    { 
        value = ft_atoi(av[i]);        
        t_list *new_node = ft_lstadd(value);
        if (!new_node) 
            exit_error(); 
            // printf("Adding to list: %d\n", value);

        ft_lstadd_first(&list, value);
        i++; 
    }
    if (check_dup(list)) 
    {
        printf("Duplicates found.\n");
    } 
    else 
    {
        printf("No dups\n");
    }
    print_list(list);
    return list; 
}


void print_list(t_list *list) 
{
    t_list *current = list;
    printf("List:\n");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        t_list *list = parsing(argc, argv);
    }
    else
    {
        ft_putstr_fd("khay sift arqam\n", 1);
    }
    return 0;
}
