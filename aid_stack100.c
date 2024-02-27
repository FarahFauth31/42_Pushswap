/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aid_stack100.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:42:19 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/15 11:00:01 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	ft_find_num_position(t_int_list *a, t_int_list *num)
{
	int	i;

	i = 0;
	if (num == NULL)
		return (i);
	while (a != NULL)
	{
		if (num->index == a->index)
			return (i);
		i++;
		a = a->next;
	}
	return (i);
}

t_int_list	*ft_first_num_chunk(int min_num, int max_num, t_int_list *a)
{
	t_int_list	*num1;

	num1 = a;
	while (num1 != NULL)
	{
		if (num1->index >= min_num && num1->index < max_num)
			return (num1);
		num1 = num1->next;
	}
	return (num1);
}

t_int_list	*ft_last_num_chunk(int min_num, int max_num, t_int_list *a)
{
	t_int_list	*num2;

	num2 = NULL;
	while (a != NULL)
	{
		if (a->index >= min_num && a->index < max_num)
			num2 = a;
		a = a->next;
	}
	return (num2);
}

t_int_list	*ft_fastest_path(t_int_list *a, t_int_list *num1, t_int_list *num2)
{
	int	len;
	int	path1;
	int	path2;

	if (num1 == NULL || num2 == NULL)
		return (NULL);
	len = ft_ilstsize(a);
	path1 = ft_find_num_position(a, num1);
	path2 = ft_find_num_position(a, num2);
	if (len - path2 < path1)
		return (num2);
	return (num1);
}

t_int_list	*ft_chosen_num(t_int_list **a, t_int_list **b, int min, int max)
{
	int			pos_num;
	t_int_list	*num;

	num = ft_fastest_path(*a, ft_first_num_chunk(min, max, *a),
			ft_last_num_chunk(min, max, *a));
	if (num != NULL)
	{
		pos_num = ft_find_num_position(*a, num);
		ft_revert_changes(*a, pos_num, ft_ilstsize(*a));
		pb(a, b);
	}
	return (num);
}
