/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:59:08 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/01/27 17:24:55 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

int	ft_is_not_num(char **stack)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	check = FALSE;
	while (stack[i] != NULL)
	{
		j = 0;
		if (stack[i][j] == 0)
			check = TRUE;
		while (stack[i][j] != 0)
		{
			if ((stack[i][j] < '0' || stack[i][j] > '9') && stack[i][j] != 32 &&
				stack[i][j] != '-')
				check = TRUE;
			if (stack[i][j] == '-' && (j != 0 || stack[i][j + 1] == 0))
				check = TRUE;
			j++;
		}
		if (check == TRUE)
			return (check);
		i++;
	}
	return (check);
}

int	ft_bigger_than_max_int(char *stack)
{
	int		comp;
	int		check;
	char	*max_int;

	check = FALSE;
	max_int = "2147483647";
	if (ft_strlen(stack) > ft_strlen(max_int))
		check = TRUE;
	if (ft_strlen(stack) == ft_strlen(max_int))
	{
		comp = ft_strncmp(max_int, stack, ft_strlen(max_int));
		if (comp < 0)
			check = TRUE;
	}
	return (check);
}

int	ft_smaller_than_min_int(char *stack)
{
	int		comp;
	int		check;
	char	*min_int;

	check = FALSE;
	min_int = "-2147483648";
	if (ft_strlen(stack) > ft_strlen(min_int))
		check = TRUE;
	if (ft_strlen(stack) == ft_strlen(min_int))
	{
		comp = ft_strncmp(min_int, stack, ft_strlen(min_int));
		if (comp < 0)
			check = TRUE;
	}
	return (check);
}

int	ft_outside_int_range(char **stack)
{
	int	i;
	int	check;

	i = 0;
	check = FALSE;
	while (stack[i] != NULL)
	{
		if (stack[i][0] == '-')
			check = ft_smaller_than_min_int(stack[i]);
		else
			check = ft_bigger_than_max_int(stack[i]);
		if (check == TRUE)
			return (check);
		i++;
	}
	return (check);
}

int	ft_repeated_num(char **stack)
{
	int		i;
	int		j;
	int		check;
	size_t	len;

	i = 0;
	check = FALSE;
	while (stack[i] != NULL)
	{
		j = 0;
		while (stack[j] != NULL)
		{
			len = ft_strlen(stack[j]);
			if (len < ft_strlen(stack[i]))
				len = ft_strlen(stack[i]);
			if (ft_strncmp(stack[i], stack[j], len) == 0 && i != j)
				check = TRUE;
			j++;
		}
		if (check == TRUE)
			return (check);
		i++;
	}
	return (check);
}
