#include "push_swap.h"

void ft_ra(t_list **stack_a, int print) 
{
    if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL) 
        return;
    t_list *first = *stack_a; 
    //to keep update ela last eleement
    t_list *last = *stack_a;
    while (last->next != NULL) 
    {
        last = last->next;
    }
    *stack_a = first->next;
    (*stack_a)->prev = NULL;
    first->next = NULL;
    last->next = first;
    first->prev = last;
    if (print)
        printf("ra\n");
}

void ft_rb(t_list **stack_b, int print) 
{
    if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL) 
        return;
    t_list *first = *stack_b; 
    //to keep update ela last eleement
    t_list *last = *stack_b;
    while (last->next != NULL) 
    {
        last = last->next;
    }
    *stack_b = first->next;
    (*stack_b)->prev = NULL;
    first->next = NULL;
    last->next = first;
    first->prev = last;
    if (print)
        printf("rb\n");
}

void ft_rr(t_list **stack_a, t_list **stack_b)
{
    ft_ra(stack_a, 0);
    ft_rb(stack_b, 0);
    printf("rr\n");
}