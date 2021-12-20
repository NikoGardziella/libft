/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:25:32 by ngardzie          #+#    #+#             */
/*   Updated: 2021/12/11 15:13:35 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*nextlist;

	list = *alst;
	if (*alst == NULL || del == NULL)
		return ;
	while (list != NULL)
	{
		nextlist = list->next;
		ft_lstdelone(&list, del);
		free(list);
		list = nextlist;
	}
	*alst = NULL;
}
