/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:17:59 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 15:52:28 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned char	*pnt1;
	unsigned char	*pnt2;
	int				ret;

	if (s1 != NULL && s2 != NULL)
	{
		pnt1 = (unsigned char *)s1;
		pnt2 = (unsigned char *)s2;
		ret = 0;
		if (*pnt1 == '\0' && *pnt2 == '\0')
			return (1);
		while (*pnt1 && *pnt2 && n > 0)
		{
			ret = ret + *pnt1 - *pnt2;
			pnt1++;
			pnt2++;
			n--;
		}
		if (ret == 0)
			return (1);
	}
	return (0);
}
