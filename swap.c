/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:44:37 by farah             #+#    #+#             */
/*   Updated: 2024/02/09 11:36:10 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	sa(t_int_list *a)
{
	int			num1;
	int			num2;
	int			index1;
	int			index2;
	t_int_list	*a_next;

	a_next = a->next;
	num1 = a->content;
	num2 = a_next->content;
	index1 = a->index;
	index2 = a_next->index;
	if (ft_ilstsize(a) > 1)
	{
		a->content = num2;
		a_next->content = num1;
		a->index = index2;
		a_next->index = index1;
		ft_printf("sa\n");
	}
}

void	sb(t_int_list *b)
{
	int			num1;
	int			num2;
	int			index1;
	int			index2;
	t_int_list	*b_next;

	b_next = b->next;
	num1 = b->content;
	num2 = b_next->content;
	index1 = b->index;
	index2 = b_next->index;
	if (ft_ilstsize(b) > 1)
	{
		b->content = num2;
		b_next->content = num1;
		b->index = index2;
		b_next->index = index1;
		ft_printf("sb\n");
	}
}

void	ss(t_int_list *a, t_int_list *b)
{
	sa(a);
	sb(b);
}
