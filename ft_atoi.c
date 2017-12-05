/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 22:10:53 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 15:20:40 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_atoi_t(int nb, char c, char b)
{
	if ((nb == 0 && (c < 9 || c > 13) &&
		c != 32 && c != 43 && c != 45) ||
		(nb == 0 && (c == 43 || c == 48 || c == 45) &&
		(b < 48 || b > 57)) ||
		(nb != 0 && (c < 48 || c > 57)))
		return (1);
	else
		return (-1);
}

static int		ft_atoi_max(int nb, int sem, char c)
{
	if ((2147483647 - nb) < (10 + c - 48) && sem == 1)
		return (-1);
	else if ((2147483647 - nb) < (10 + c - 48) && sem == -1)
		return (0);
	else
		return (1);
}

int				ft_atoi(const char *nptr)
{
	int nb;
	int i;
	int sem;

	nb = 0;
	i = 0;
	sem = 1;
	while (nptr[i] != '\0')
	{
		if (nb == 0 && nptr[i] == 45 && nptr[i + 1] >= 48 && nptr[i + 1] <= 57)
			sem = -sem;
		else if (nb == 0 && nptr[i] == 48 &&
			(nptr[i + 1] < 48 || nptr[i + 1] > 57))
			break ;
		else if (nptr[i] >= 48 && nptr[i] <= 57)
		{
			if (ft_atoi_max(nb, sem, nptr[i]) != 1)
				return (ft_atoi_max(nb, sem, nptr[i]));
			nb = nb * 10 + nptr[i] - 48;
		}
		else if (ft_atoi_t(nb, nptr[i], nptr[i + 1]) == 1)
			break ;
		i++;
	}
	return (nb * sem);
}
