/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:40:31 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/04 03:25:03 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pnt;
	unsigned char	*tmp;

	pnt = (unsigned char *)dst;
	tmp = (unsigned char *)src;
	while (n--)
		*pnt++ = *tmp++;
	return (dst);
}
