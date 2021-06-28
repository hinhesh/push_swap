#include "pushswap.h"

t_list *ft_last(t_list **stack)
{
    t_list *last;

    last = *(stack);
    if (last == NULL)
        return (NULL);
    while (last->next != NULL)
        last = last->next;
    return (last);
}

int ft_ra(void)
{
        t_list *tmp;

        if (data.stack_a != NULL && *(data.stack_a) != NULL
        && (*data.stack_a)->next != NULL)
        {
            tmp = *(data.stack_a);
            *(data.stack_a) = tmp->next;
            tmp->next = NULL;
            ft_last(data.stack_a)->next = tmp;
            return (1);
        }
        return (-1);
}

int ft_rb(void)
{
        t_list *tmp;

        if (data.stack_b != NULL && *(data.stack_b) != NULL
        && (*data.stack_b)->next != NULL)
        {
            tmp = *(data.stack_b);
            *(data.stack_b) = tmp->next;
            tmp->next = NULL;
            ft_last(data.stack_b)->next = tmp;
            return (1);
        }
        return (-1);
}

int ft_rr(void)
{
    if (ft_ra() == -1 && ft_rb() == -1)
        return (-1);
    return (1);
}