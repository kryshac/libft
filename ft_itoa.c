/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 21:02:38 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 15:22:26 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_nr(int n)
{
	int	i;

	i = 0;
	if (n < 0 && i++ == 0)
		n = -n;
	while (i++ < 10 && n > 9)
		n = n / 10;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*pnt;
	int		i;
	int		p;

	p = 0;
	if (n == -2147483648 && n++ < 0)
		p = 1;
	i = ft_itoa_nr(n);
	pnt = (char *)malloc(i + 1);
	if (pnt == NULL)
		return (NULL);
	if (n < 0)
		pnt[0] = '-';
	else
		pnt[0] = '0';
	pnt[i--] = '\0';
	while (n >= 1 || n <= -1)
	{
		if (p == 1 && i == 10)
			pnt[i--] = n * ((n < 0) * -1 + (n > 0)) % 10 + 49;
		else
			pnt[i--] = n * ((n < 0) * -1 + (n > 0)) % 10 + 48;
		n = n / 10;
	}
	return (pnt);
}
