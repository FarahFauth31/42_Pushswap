/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/15 10:33:09 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	ft_check_if_error(char **stack, int space)
{
	if (ft_is_not_num(stack) == TRUE || ft_outside_int_range(stack) == TRUE
		|| ft_repeated_num(stack) == TRUE || space > 1)
	{
		ft_putstr_fd("Error\n", 2);
		if (space >= TRUE)
			ft_free_char_pp(stack);
		return (TRUE);
	}
	return (FALSE);
}

void	ft_free_char_pp(char **stack)
{
	int	i;

	i = 0;
	while (stack[i] != NULL)
	{
		free(stack[i]);
		i++;
	}
	free (stack);
}
