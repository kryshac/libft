/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:32:33 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/04 23:08:45 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pnt;
	unsigned char	*end;

	pnt = (unsigned char *)b;
	end = pnt + len;
	while (pnt != end)
		*pnt++ = (unsigned char)c;
	return (b);
}
