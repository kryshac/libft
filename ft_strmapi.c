/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 21:18:21 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 20:49:19 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*pnt;
	char		*ret;
	unsigned	i;

	if (s != NULL)
	{
		pnt = ft_strdup(s);
		if (pnt == NULL)
			return (NULL);
		ret = pnt;
		i = 0;
		while (*pnt)
		{
			*pnt = f(i, *pnt);
			pnt++;
			i++;
		}
		return (ret);
	}
	return (NULL);
}
