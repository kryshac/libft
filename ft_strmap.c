/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 21:03:25 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 15:25:04 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
				pnt[i - 1] = f(s[i - 1]);
				i--;
			}
		}
		return (pnt);
	}
	return (NULL);
}
