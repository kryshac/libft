/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:42:27 by ccristia          #+#    #+#             */
/*   Updated: 2017/11/30 01:47:52 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(size + 1);
	if (str != NULL)
	{
		i = 0;
		while (i <= size)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
