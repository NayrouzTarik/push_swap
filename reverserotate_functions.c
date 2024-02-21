#include "push_swap.h"

void ft_rra(t_list **stack_a, int print) 
{
    if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL) 
        return;
    t_list *last = *stack_a;
    t_list *before_last = NULL;
    while (last->next != NULL) 
    {
        before_last = last;
        last = last->next;
    }
    if (before_last != NULL)
        before_last->next = NULL;
    last->next = *stack_a;
    (*stack_a)->prev = last;
    last->prev = NULL;
    *stack_a = last;
    if (print)
    {
        printf("rra\n");
    }
}

void ft_rrb(t_list **stack_b, int print) 
{
    if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL) 
        return;
    t_list *last = *stack_b;
    t_list *before_last = NULL;
    while (last->next != NULL) 
    {
        before_last = last;
        last = last->next;
    }
    if (before_last != NULL)
        before_last->next = NULL;
    last->next = *stack_b;
    (*stack_b)->prev = last;
    last->prev = NULL;
    *stack_b = last;
    if (print)
    {
        printf("rrb\n");
    }
}

void ft_rrr(t_list **stack_a, t_list **stack_b)
{
    ft_rra(stack_a, 0);
    ft_rrb(stack_b, 0);
    printf("rrr\n");
}
