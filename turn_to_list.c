/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turn_to_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/05 10:25:41 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	count_sign;
	int	str_count;
	int	temp;

	count_sign = 1;
	str_count = 0;
	temp = 0;
	while (str[str_count] == 32 || str[str_count] == '\f'
		|| str[str_count] == '\n' || str[str_count] == '\r'
		|| str[str_count] == '\t' || str[str_count] == '\v')
		str_count++;
	if (str[str_count] == '+' || str[str_count] == '-')
	{
		if (str[str_count] == '-')
			count_sign = count_sign * (-1);
		str_count++;
	}
	while (str[str_count] >= '0' && str[str_count] <= '9')
	{
		temp = temp * 10 + str[str_count] - '0';
		str_count++;
	}
	return (temp * count_sign);
}

t_int_list	*ft_turn_to_list(char **stack)
{
	int			i;
	t_int_list	*int_stack;
	t_int_list	*temp;

	i = 0;
	int_stack = NULL;
	while (stack[i] != NULL)
	{
		temp = ft_ilstnew(ft_atoi(stack[i]));
		if (temp == NULL)
		{
			if (int_stack != NULL)
				ft_ilstclear(&int_stack);
			return (NULL);
		}
		if (int_stack == NULL)
			int_stack = temp;
		else
			ft_ilstadd_back(&int_stack, temp);
		i++;
	}
	return (int_stack);
}
