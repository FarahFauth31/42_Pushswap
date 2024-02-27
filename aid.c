/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aid.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 12:11:03 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	ft_find_smallest_number(t_int_list *a)
{
	int			i;
	int			smallest;
	t_int_list	*temp1;
	t_int_list	*temp2;

	temp1 = a;
	i = 0;
	while (temp1 != NULL)
	{
		temp2 = a;
		smallest = TRUE;
		while (temp2 != NULL)
		{
			if (temp1->content > temp2->content)
				smallest = FALSE;
			temp2 = temp2->next;
		}
		if (smallest == TRUE)
			return (i);
		temp1 = temp1->next;
		i++;
	}
	return (i);
}

void	ft_revert_changes(t_int_list *a, int position, int len)
{
	int	div;
	int	num;

	div = len / 2;
	if (div == len - len / 2)
		num = len / 2 - 1;
	else
		num = len / 2;
	if (position <= num)
	{
		while (position > 0)
		{
			ra(a);
			position--;
		}
	}
	if (position > num)
	{
		while (position < len)
		{
			rra(a);
			position++;
		}
	}
}

void	ft_b_revert_changes(t_int_list *b, int position, int len)
{
	int	div;
	int	num;

	div = len / 2;
	if (div == len - len / 2)
		num = len / 2 - 1;
	else
		num = len / 2;
	if (position <= num)
	{
		while (position > 0)
		{
			rb(b);
			position--;
		}
	}
	if (position > num)
	{
		while (position < len)
		{
			rrb(b);
			position++;
		}
	}
}

int	ft_check_if_in_order(t_int_list *stack)
{
	t_int_list	*next;

	while (stack->next != NULL)
	{
		next = stack->next;
		if (stack->content > next->content)
			return (FALSE);
		stack = next;
	}
	return (TRUE);
}

void	ft_send_n_smallest(t_int_list **a, t_int_list **b, int n)
{
	int	pos_smallest;

	while (n > 0)
	{
		pos_smallest = ft_find_smallest_number(*a);
		ft_revert_changes(*a, pos_smallest, ft_ilstsize(*a));
		pb(a, b);
		n--;
	}
}
