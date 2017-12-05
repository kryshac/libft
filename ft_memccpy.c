/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:25:40 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/04 03:33:37 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pnt;
	unsigned char	*tmp;

	pnt = (unsigned char *)dst;
	tmp = (unsigned char *)src;
	while (n--)
	{
		*pnt++ = *tmp;
		if (*tmp++ == (unsigned char)c)
			return (pnt);
	}
	return (NULL);
}
