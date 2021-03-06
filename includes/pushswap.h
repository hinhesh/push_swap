#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_med
{
	int	one;
	int	two;
	int	three;
	int	four;
	int	five;
	int	six;
	int	seven;
	int	i_one;
	int	i_two;
	int	i_three;
	int	i_four;
	int	i_five;
	int	i_six;
	int	i_seven;
}t_med;

typedef struct s_stacks
{
	t_list	**stack_a;
	int		len_a;
	t_list	**stack_b;
	int		len_b;
	t_med	med;
	t_list	*last_stacka;
	t_list	*last_stackb;
	int		nb_push;
	t_list	**list_med;
	t_list	*min;
	int		i_min;
	int		i_max;
	t_list	*max;
}t_stacks;

t_stacks	g_da;

int		ft_calculate(int len, int *first);
void	ft_calculate_bis(int len, int *first, int i_min);
int		ft_initiate_data(void);
void	ft_sort_two(void);
void	ft_sort_three(void);
int		ft_check_duplicate(int nb, t_list **stack);
int		ft_create_stack_a(int len, char **arg);
int		ft_parsing(int len, char **arg);
void	ft_print_stack(t_list **stack);
void	ft_error(void);
void	ft_sort_int_tab(int *tab, int size, int *tri);
int		*ft_create_tab(t_list **stack, int len);
void	ft_print_tab(int *tab);
void	ft_find_mediane(t_list **stack, int len);
int		ft_sa(void);
int		ft_sb(void);
int		ft_pa(void);
int		ft_pb(void);
int		ft_ra(void);
int		ft_rb(void);
int		ft_rr(void);
t_list	*ft_last(t_list **stack);
t_list	*ft_last_before(t_list **stack);
int		ft_rra(void);
int		ft_rrb(void);
int		ft_rrr(void);
int		ft_solve_hundred(void);
void	ft_print_reverse(t_list *stack);
double	ft_atoi_ps(const char *str);
void	ft_parsing_bis(char **arg);
int		ft_space(char c);
int		ft_debut_stacka(t_list *tmp, int med);
int		ft_end_stacka(int med);
int		ft_mid_stack_a(int med, int i_med);
void	ft_sort(t_list **stack);
void	ft_insert_min(void);
void	ft_insert_max(void);
void	ft_putdown(int med);
void	ft_make_stack_b(int med, int i);
void	ft_insert(void);
void	ft_solve_five_hundred(void);
void	ft_sort_five(void);
int		ft_max(int a, int b, int *first);
#endif