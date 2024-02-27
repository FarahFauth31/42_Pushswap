/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:44:25 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 13:13:12 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef struct s_int_list
{
	int					content;
	int					index;
	struct s_int_list	*next;
}					t_int_list;

/* Input */
t_int_list	*ft_turn_to_list(char **stack);
int			ft_found_space(char *str);
void		ft_give_index(t_int_list *stack);
void		print_stack(t_int_list *a);

/* Errors */
int			ft_is_not_num(char **stack);
int			ft_bigger_than_max_int(char *stack);
int			ft_smaller_than_min_int(char *stack);
int			ft_outside_int_range(char **stack);
int			ft_repeated_num(char **stack);
int			ft_check_if_error(char **stack, int space);
void		ft_free_char_pp(char **stack);

/* Lists */
t_int_list	*ft_ilstnew(int content);
t_int_list	*ft_ilstlast(t_int_list *lst);
void		ft_ilstadd_front(t_int_list **lst, t_int_list *new);
void		ft_ilstadd_back(t_int_list **lst, t_int_list *new);
int			ft_ilstsize(t_int_list *lst);
void		ft_ilstdelone(t_int_list *lst);
void		ft_ilstclear(t_int_list **lst);
void		ft_ilstiter(t_int_list *lst, void (*f)(int));
t_int_list	*ft_ilstmap(t_int_list *lst, int (*f)(int));

/* Operations */
void		sa(t_int_list *a);
void		sb(t_int_list *b);
void		ss(t_int_list *a, t_int_list *b);
void		pa(t_int_list **a, t_int_list **b);
void		pb(t_int_list **a, t_int_list **b);
void		ra(t_int_list *a);
void		rb(t_int_list *b);
void		rr(t_int_list *a, t_int_list *b);
void		rra(t_int_list *a);
void		rrb(t_int_list *b);
void		rrr(t_int_list *a, t_int_list *b);

/* Aid */
int			ft_find_smallest_number(t_int_list *a);
void		ft_revert_changes(t_int_list *a, int position, int len);
void		ft_b_revert_changes(t_int_list *a, int position, int len);
void		ft_send_n_smallest(t_int_list **a, t_int_list **b, int n);
int			ft_check_if_in_order(t_int_list *stack);

/* Sorting "a" stacks respect to their length */
void		ft_a_stack2(t_int_list *a);
void		ft_a_stack3(t_int_list *a);
void		ft_s100_stack3(t_int_list *s);
void		ft_a_stack4(t_int_list **a, t_int_list **b);
void		ft_a_stack5(t_int_list **a, t_int_list **b);

/* Sorting "b" stacks respect to their length */
void		ft_b_stack2(t_int_list *b);

/* Aid Stack 100 */
int			ft_find_num_position(t_int_list *a, t_int_list *num);
t_int_list	*ft_first_num_chunk(int min_num, int max_num, t_int_list *a);
t_int_list	*ft_last_num_chunk(int min_num, int max_num, t_int_list *a);
t_int_list	*ft_fastest_path(t_int_list *a, t_int_list *num1, t_int_list *num2);
t_int_list	*ft_chosen_num(t_int_list **a, t_int_list **b, int min, int max);

/* Stack 100 */
void		ft_send_in_chunks(t_int_list **a, t_int_list **b, int n_chunks);
int			ft_return_size3(t_int_list **a, t_int_list **b, int max);
void		ft_stack100(t_int_list **a, t_int_list **b, int n_chunks);

t_int_list	*push_swap(t_int_list *a, t_int_list *b);

#endif