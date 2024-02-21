#include "push_swap.h"
#include "./libft/libft.h"

void ft_sa(t_list **stack_a, int should_print)
{
    t_list *first;
    t_list *second;

    if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL)
        return;
    first = *stack_a;
    second = first->next;

    first->next = second->next;
    second->next = first;
    second->prev = first->prev; 
    first->prev = second; 
    if (first->next != NULL) 
    { 
        first->next->prev = first;
    }
    *stack_a = second;
    if (should_print)
        printf("sa\n");
}


void ft_sb(t_list **stack_b, int should_print)
{
    t_list *first;
    t_list *second;

    if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL)
        return;
    first = *stack_b;
    second = first->next;
    first->next = second->next;
    second->next = first;
    second->prev = first->prev;
    first->prev = second; 
    if (first->next != NULL) 
    { 
        first->next->prev = first;
    }
    *stack_b = second;
    if (should_print)
        printf("sb\n");
}

void ft_ss(t_list **stack_a, t_list **stack_b)
{
    ft_sa(stack_a, 0); 
    ft_sb(stack_b, 0); 
    printf("ss\n");
}
