/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:11:12 by ffauth-p          #+#    #+#             */
/*   Updated: 2024/02/09 11:00:52 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libft/ft_printf.h"
#include "push_swap.h"

t_int_list	*ft_ilstnew(int content)
{
	t_int_list	*node;

	node = (t_int_list *)malloc(sizeof(t_int_list));
	if (!(node))
		return (NULL);
	node[0].content = content;
	node[0].index = 0;
	node[0].next = NULL;
	return (node);
}

t_int_list	*ft_ilstlast(t_int_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_ilstadd_front(t_int_list **lst, t_int_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = (*lst);
		(*lst) = new;
	}
}

void	ft_ilstadd_back(t_int_list **lst, t_int_list *new)
{
	t_int_list	*last;

	if (lst != NULL && new != NULL)
	{
		last = ft_ilstlast(*lst);
		if (last == NULL)
			(*lst) = new;
		else
			last->next = new;
	}
}

int	ft_ilstsize(t_int_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
