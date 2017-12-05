/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 22:10:53 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 18:57:18 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*pnt;
	int		nb;
	int		sem;

	nb = 0;
	sem = 1;
	pnt = (char *)str;
	while (*pnt)
	{
		if (*pnt >= '0' && *pnt <= '9')
		{
			if ((2147483647 - nb) < (10 + *pnt - 48))
				return ((sem != -1) * -1);
			nb = nb * 10 + *pnt - '0';
		}
		else if (nb == 0 && (*pnt == '-' || *pnt == '+') &&
			(*(pnt + 1) >= '0' && *(pnt + 1) <= '9'))
			sem = ((*pnt == '-') * -1 + (*pnt == '+'));
		else if (nb != 0 || (!(*pnt >= 8 && *pnt <= 13) && *pnt != 32))
			return (nb * sem);
		pnt++;
	}
	return (nb * sem);
}
