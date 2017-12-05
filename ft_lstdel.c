/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:57:21 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 22:08:51 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*pnt;
	t_list	*tmp;

	pnt = *alst;
	while (pnt)
	{
		tmp = pnt->next;
		del(pnt->content, pnt->content_size);
		free(pnt);
		pnt = tmp;
	}
	*alst = NULL;
}
