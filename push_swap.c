/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:48:02 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/14 13:03:54 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

t_int_list	*push_swap(t_int_list *a, t_int_list *b)
{
	int	len;

	ft_give_index(a);
	len = ft_ilstsize(a);
	if (len == 2)
		ft_a_stack2(a);
	if (len == 3)
		ft_a_stack3(a);
	if (len == 4)
		ft_a_stack4(&a, &b);
	if (len == 5)
		ft_a_stack5(&a, &b);
	if (len > 5 && len <= 100)
		ft_stack100(&a, &b, 5);
	if (len > 100)
		ft_stack100(&a, &b, 12);
	return (a);
}
