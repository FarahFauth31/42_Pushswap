/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:42:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 13:01:30 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	ft_send_in_chunks(t_int_list **a, t_int_list **b, int n_chunks)
{
	int			chunk;
	int			min;
	int			max;
	t_int_list	*chosen_num;

	min = 0;
	max = ft_ilstsize(*a);
	chunk = (max - min) / n_chunks;
	while (min < max)
	{
		chosen_num = ft_chosen_num(a, b, min, min + chunk);
		if (chosen_num == NULL)
			min = min + chunk;
	}
	while ((*a) != NULL)
		chosen_num = ft_chosen_num(a, b, min, max);
}

int	ft_return_size3(t_int_list **a, t_int_list **b, int max)
{
	int			n;
	int			pos_num;
	t_int_list	*num;

	n = 0;
	while (n < 3)
	{
		num = ft_fastest_path(*b, ft_first_num_chunk(max - 3, max, *b),
				ft_last_num_chunk(max - 3, max, *b));
		if (num != NULL)
		{
			pos_num = ft_find_num_position(*b, num);
			ft_b_revert_changes(*b, pos_num, ft_ilstsize(*b));
			pa(a, b);
			if (ft_ilstsize(*a) > 1)
			{
				if ((*a)->index > (*a)->next->index)
					sa(*a);
			}
		}
		if (num == NULL)
			return (max - 3);
		n++;
	}
	return (max - 3);
}

void	ft_stack100(t_int_list **a, t_int_list **b, int n_chunks)
{
	int	max;

	max = ft_ilstsize(*a);
	if (ft_check_if_in_order(*a) == FALSE)
	{
		ft_send_in_chunks(a, b, n_chunks);
		while (max > 3)
		{
			max = ft_return_size3(a, b, max);
			ft_s100_stack3(*a);
		}
		max = ft_return_size3(a, b, max);
		ft_s100_stack3(*a);
	}
}
