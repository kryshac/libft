/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:03:16 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/04 17:38:38 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	else
		ft_strcpy(str, (char *)s1);
	return (str);
}
