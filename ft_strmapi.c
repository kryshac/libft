/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 21:18:21 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 15:24:12 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pnt;
	size_t	i;

	if (s != NULL)
	{
		i = ft_strlen(s);
		pnt = (char *)malloc(i + 1);
		if (pnt != NULL)
		{
			pnt[i] = '\0';
			while (i > 0)
			{
				pnt[i - 1] = f((unsigned int)(i - 1), s[i - 1]);
				i--;
			}
		}
		return (pnt);
	}
	return (NULL);
}
