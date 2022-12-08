/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:42:13 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/08 16:06:33 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*curr;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	curr = start;
	if (start == NULL)
		return (NULL);
	while (lst && lst->next)
	{
		curr->next = ft_lstnew(f(lst->content));
		if (curr->next == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (start);
}
