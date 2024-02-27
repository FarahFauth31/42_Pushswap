/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:42:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 12:43:34 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	ft_a_stack3(t_int_list *a)
{
	t_int_list	*a1;
	t_int_list	*a2;

	a1 = a->next;
	a2 = a1->next;
	if (a->content > a1->content && a->content < a2->content)
		sa(a);
	if (a->content > a1->content && a1->content > a2->content)
	{
		sa(a);
		rra(a);
	}
	if (a->content > a1->content && a1->content <= a2->content)
		ra(a);
	if (a->content < a1->content && a1->content > a2->content
		&& a->content <= a2->content)
	{
		sa(a);
		ra(a);
	}
	if (a->content <= a1->content && a1->content > a2->content
		&& a->content > a2->content)
		rra(a);
}

void	ft_s100_stack3(t_int_list *s)
{
	t_int_list	*s1;
	t_int_list	*s2;

	s1 = s->next;
	s2 = s1->next;
	if (s->content < s1->content && s1->content > s2->content
		&& s->content <= s2->content)
	{
		ra(s);
		sa(s);
		rra(s);
	}
}
