/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:28:24 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/04 03:46:57 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *pnt;

	pnt = (unsigned char *)s;
	while (n--)
		if (*pnt++ == (unsigned char)c)
			return (--pnt);
	return (NULL);
}
