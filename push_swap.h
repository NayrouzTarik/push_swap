/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:10:22 by marvin            #+#    #+#             */
/*   Updated: 2024/02/17 17:10:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
    int value;
    int index_in_stack;
    int index_in_order;
    struct s_list *next;
    struct s_list *prev;
}               t_list;

t_list* ft_lstadd(int value);
void ft_lstadd_first(t_list **list, int value);
void ft_lstadd_last(t_list **lst, int value);
void deleteNode(t_list **list, t_list *del);
int ft_lstsize(t_list *list);
int exists_in_list(t_list *list, int value);
void print_list(t_list *list);
size_t ft_atoi(const char *str);
int is_valid_number(char *str) ;
int ft_isdigit(int c) ;

//swap functions
void ft_sa(t_list **stack_a, int should_print);
void ft_sb(t_list **stack_b, int should_print);
void ft_ss(t_list **stack_a, t_list **stack_b);
//push functions
void ft_pa(t_list **stack_a, t_list **stack_b);
void ft_pb(t_list **stack_a, t_list **stack_b);
//reverse rotating functions
void ft_rra(t_list **stack_a, int print);
void ft_rrb(t_list **stack_b, int print);
void ft_rrr(t_list **stack_a, t_list **stack_b);
//rotating functions
void ft_ra(t_list **stack_a, int print);
void ft_rb(t_list **stack_b, int print);
void ft_rr(t_list **stack_a, t_list **stack_b);
//sorting fcts
void sorth_two(t_list ***stack_a , t_list ***stack_b);
void sorting_tree(t_list ***stack_a , t_list ***stack_b);
void sorth_four(t_list ***stack_a , t_list ***stack_b);
void sorting_five(t_list ***stack_a, t_list ***stack_b);
void sorth_upper_than_one_hundred(t_list **stack_a, t_list **stack_b);

//helper fcts
int find_min(t_list **stack);
void signed_and_number(char *str);
void merge_sort(t_list **stack_a, t_list **stack_b, int size);
int find_max(t_list **stack);



#endif