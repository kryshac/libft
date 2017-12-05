/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 21:03:25 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 20:48:47 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*pnt;
	char	*ret;

	if (s != NULL)
	{
		pnt = ft_strdup(s);
		if (pnt == NULL)
			return (NULL);
		ret = pnt;
		while (*pnt)
		{
			*pnt = f(*pnt);
			pnt++;
		}
		return (ret);
	}
	return (NULL);
}
