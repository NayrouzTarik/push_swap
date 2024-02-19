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
    struct s_list *next;
    struct s_list *prev;
}               t_list;

t_list* ft_lstadd(int value);
void ft_lstadd_first(t_list **list, int value);
void ft_lstadd_last(t_list **lst, int value);
void deleteNode(t_list **list, t_list *del);
int ft_lstsize(t_list *list);
int check_dup(t_list *list);
void print_list(t_list *list);

#endif