#include "push_swap.h"

void ft_pa(t_list **stack_a, t_list **stack_b)
{
    t_list *top_b;

    if (stack_b == NULL || *stack_b == NULL)
        return;

    top_b = *stack_b;           
    *stack_b = (*stack_b)->next;    

    if (*stack_b != NULL) 
    {
        (*stack_b)->prev = NULL;
    }
    if (*stack_a != NULL) 
    {        
        (*stack_a)->prev = top_b;
    }
    top_b->next = *stack_a; 
    top_b->prev = NULL;   
    *stack_a = top_b;
    // printf("pa\n");
}

void ft_pb(t_list **stack_a, t_list **stack_b)
{
    t_list *top_a;

    if (stack_a == NULL || *stack_a == NULL)
        return;

    top_a = *stack_a;           
    *stack_a = (*stack_a)->next;    

    if (*stack_a != NULL) 
    {
        (*stack_a)->prev = NULL;
    }
    if (*stack_b != NULL) 
    {        
        (*stack_b)->prev = top_a;
    }
    top_a->next = *stack_b; 
    top_a->prev = NULL;   
    *stack_b = top_a;
    printf("pb\n");
}
