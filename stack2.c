/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:42:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 10:31:24 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	ft_a_stack2(t_int_list *a)
{
	int			num1;
	int			num2;
	t_int_list	*a_next;

	a_next = a->next;
	num1 = a->content;
	num2 = a_next->content;
	if (num1 > num2)
		sa(a);
}

void	ft_b_stack2(t_int_list *b)
{
	int			num1;
	int			num2;
	t_int_list	*b_next;

	b_next = b->next;
	num1 = b->content;
	num2 = b_next->content;
	if (num1 < num2)
		sb(b);
}
