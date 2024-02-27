/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:35:17 by farah             #+#    #+#             */
/*   Updated: 2024/02/09 11:40:01 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	ra(t_int_list *a)
{
	int			len;
	int			temp;
	int			temp_i;
	t_int_list	*a_next;

	len = ft_ilstsize(a);
	if (len > 1)
	{
		temp = a->content;
		temp_i = a->index;
		while (a->next != NULL)
		{
			a_next = a->next;
			a->content = a_next->content;
			a->index = a_next->index;
			a = a->next;
		}
		a->content = temp;
		a->index = temp_i;
		ft_printf("ra\n");
	}
}

void	rb(t_int_list *b)
{
	int			len;
	int			temp;
	int			temp_i;
	t_int_list	*b_next;

	len = ft_ilstsize(b);
	if (len > 1)
	{
		temp = b->content;
		temp_i = b->index;
		while (b->next != NULL)
		{
			b_next = b->next;
			b->content = b_next->content;
			b->index = b_next->index;
			b = b->next;
		}
		b->content = temp;
		b->index = temp_i;
		ft_printf("rb\n");
	}
}

void	rr(t_int_list *a, t_int_list *b)
{
	ra(a);
	rb(b);
}
