/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:42:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 11:01:55 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	ft_a_stack5(t_int_list **a, t_int_list **b)
{
	if (ft_check_if_in_order(*a) == FALSE)
	{
		ft_send_n_smallest(a, b, 2);
		ft_b_stack2(*b);
		ft_a_stack3(*a);
		pa(a, b);
		pa(a, b);
	}
}
