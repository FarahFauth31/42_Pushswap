/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:45:44 by farah             #+#    #+#             */
/*   Updated: 2024/02/09 11:43:52 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	rra(t_int_list *a)
{
	int	len;
	int	temp;
	int	temp2;
	int	temp_i;
	int	temp2_i;

	len = ft_ilstsize(a);
	if (len > 1)
	{
		temp = ft_ilstlast(a)->content;
		temp_i = ft_ilstlast(a)->index;
		while (a != NULL)
		{
			temp2 = a->content;
			a->content = temp;
			temp = temp2;
			temp2_i = a->index;
			a->index = temp_i;
			temp_i = temp2_i;
			a = a->next;
		}
		ft_printf("rra\n");
	}
}

void	rrb(t_int_list *b)
{
	int	len;
	int	temp;
	int	temp2;
	int	temp_i;
	int	temp2_i;

	len = ft_ilstsize(b);
	if (len > 1)
	{
		temp = ft_ilstlast(b)->content;
		temp_i = ft_ilstlast(b)->index;
		while (b != NULL)
		{
			temp2 = b->content;
			b->content = temp;
			temp = temp2;
			temp2_i = b->index;
			b->index = temp_i;
			temp_i = temp2_i;
			b = b->next;
		}
		ft_printf("rrb\n");
	}
}

void	rrr(t_int_list *a, t_int_list *b)
{
	rra(a);
	rrb(b);
}
