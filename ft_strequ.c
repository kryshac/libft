/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 21:25:44 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 21:11:52 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*pnt1;
	char	*pnt2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	pnt1 = (char *)s1;
	pnt2 = (char *)s2;
	while (*pnt1 && *pnt2)
	{
		if (*pnt1 != *pnt2)
			return (0);
		pnt1++;
		pnt2++;
	}
	if (*pnt1 != *pnt2)
		return (0);
	return (1);
}
