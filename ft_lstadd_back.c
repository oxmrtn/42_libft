/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:51:54 by mtrullar          #+#    #+#             */
/*   Updated: 2024/05/31 18:21:14 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(*lst))
		ft_lstadd_front(lst, new);
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
