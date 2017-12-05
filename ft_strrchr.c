/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:43:28 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 03:12:01 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pnt;
	char	*ret;

	pnt = (char *)s;
	ret = NULL;
	while(*pnt)
		if (*pnt++ == (char)c)
			ret = pnt - 1;
	if ((char)c == '\0')
		return (pnt);
	return (ret);
}
