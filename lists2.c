/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:11:12 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/05 11:12:04 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

void	ft_ilstdelone(t_int_list *lst)
{
	free (lst);
}

void	ft_ilstclear(t_int_list **lst)
{
	t_int_list	*next_node;

	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		free(*lst);
		(*lst) = next_node;
	}
}

void	ft_ilstiter(t_int_list *lst, void (*f)(int))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

t_int_list	*ft_ilstmap(t_int_list *lst, int (*f)(int))
{
	t_int_list	*new_list;
	t_int_list	*new_node;
	int			data;

	new_list = NULL;
	while (lst != NULL)
	{
		data = (*f)(lst->content);
		new_node = ft_ilstnew(data);
		if (new_node == NULL)
		{
			ft_ilstclear(&new_list);
			return (NULL);
		}
		ft_ilstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
