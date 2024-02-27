/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:51:25 by farah             #+#    #+#             */
/*   Updated: 2024/02/09 11:32:45 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	pa(t_int_list **a, t_int_list **b)
{
	int			len_b;
	t_int_list	*new;
	t_int_list	*to_delete;

	len_b = ft_ilstsize(*b);
	if (len_b > 0)
	{
		new = ft_ilstnew((*b)->content);
		new->index = (*b)->index;
		if (new == NULL)
			return ;
		ft_ilstadd_front(a, new);
		to_delete = *b;
		(*b) = (*b)->next;
		free(to_delete);
		ft_printf("pa\n");
	}
}

void	pb(t_int_list **a, t_int_list **b)
{
	int			len_a;
	t_int_list	*new;
	t_int_list	*to_delete;

	len_a = ft_ilstsize(*a);
	if (len_a > 0)
	{
		new = ft_ilstnew((*a)->content);
		new->index = (*a)->index;
		if (new == NULL)
			return ;
		ft_ilstadd_front(b, new);
		to_delete = *a;
		(*a) = (*a)->next;
		free(to_delete);
		ft_printf("pb\n");
	}
}
