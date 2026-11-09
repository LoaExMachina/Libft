/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:25:40 by spitte            #+#    #+#             */
/*   Updated: 2026/11/09 12:49:49 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*previous;

	if (lst)
	{
		while (*lst)
		{
			previous = (*lst);
			*lst = (*lst)->next;
			ft_lstdelone(previous, del);
			free (previous);
		}
	}
}
