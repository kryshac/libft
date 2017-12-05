/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 14:35:49 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/03 14:56:45 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	char	*s;

	if (!str)
		return (NULL);
	s = str;
	while (*str)
	{
		*str = ft_toupper(*str);
		++str;
	}
	return (s);
}
