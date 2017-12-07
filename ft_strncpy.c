/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 22:15:12 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/07 13:31:57 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*tmp;
	char	*tmp1;

	tmp = dst;
	tmp1 = (char *)src;
	while (len--)
	{
		if (*tmp1)
			*tmp++ = *tmp1++;
		else
			*tmp++ = '\0';
	}
	return (dst);
}
