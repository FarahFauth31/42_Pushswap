/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:09:43 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/15 10:32:31 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	main(int argc, char **arg)
{
	t_int_list	*a;
	t_int_list	*b;
	int			space;

	if (argc == 1)
		return (0);
	arg++;
	space = ft_found_space(arg[0]);
	if (space >= TRUE)
		arg = ft_split(arg[0], 32);
	if (ft_check_if_error(arg, space) == TRUE)
		return (0);
	a = ft_turn_to_list(arg);
	if (a == NULL)
	{
		if (space == TRUE)
			ft_free_char_pp(arg);
		return (0);
	}
	if (space == TRUE)
		ft_free_char_pp(arg);
	b = NULL;
	a = push_swap(a, b);
	ft_ilstclear(&a);
	ft_ilstclear(&b);
}
