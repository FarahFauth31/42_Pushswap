/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/15 10:31:47 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	ft_found_space(char *str)
{
	int	i;
	int	space;
	int	n_spaces;

	i = 0;
	space = FALSE;
	while (str[i] != 0)
	{
		n_spaces = 0;
		if (str[i] == 32)
			space = TRUE;
		while (str[i] == 32)
		{
			n_spaces++;
			i++;
		}
		if (n_spaces > 1)
			return (n_spaces);
		i++;
	}
	return (space);
}

void	ft_give_index(t_int_list *stack)
{
	t_int_list	*temp1;
	t_int_list	*temp2;
	int			i;

	temp1 = stack;
	while (temp1 != NULL)
	{
		i = 0;
		temp2 = stack;
		while (temp2 != NULL)
		{
			if (temp1->content > temp2->content)
				i++;
			temp2 = temp2->next;
		}
		temp1->index = i;
		temp1 = temp1->next;
	}
}

void	print_stack(t_int_list *a)
{
	while (a != NULL)
	{
		ft_printf("%d\n", a->content);
		ft_printf("index: %d\n", a->index);
		a = a->next;
	}
}
