/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:36:12 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 02:20:37 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *pnt;

	pnt = (char *)s;
	while (*pnt)
		if (*pnt++ == (char)c)
			return (--pnt);
	if ((char)c == '\0')
		return (pnt);
	else
		return (NULL);
}
