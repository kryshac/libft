/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccristia <ccristia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 16:22:00 by ccristia          #+#    #+#             */
/*   Updated: 2017/12/05 05:53:56 by ccristia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t n)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	t;
//
// 	i = 0;
// 	j = -1;
// 	t = -1;
// 	if (((char *)little)[j + 1] == '\0')
// 		return ((char *)big);
// 	while (((char *)big)[i] != '\0' && i < n)
// 	{
// 		if (((char *)big)[i] == ((char *)little)[j + 1])
// 		{
// 			j++;
// 			if (((char *)little)[j + 1] == '\0')
// 				return ((char *)(big + i - j));
// 		}
// 		else if (((char *)big)[i] != ((char *)little)[j + 1] && i - j - 1 != t)
// 		{
// 			i = i - j - 1;
// 			j = -1;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char	*des;
	char	*src;
	char	*tmpdes;
	char	*tmpsrc;

	des = (char *)big;
	src = (char *)little;
	tmpdes = des;
	tmpsrc = src;
	while (*des && *src && n-- > 0)
	{
		if (*des++ == *src)
		{
			if (tmpsrc == src++)
				tmpdes = des - 1;
		}
		else
		{
			des = ++tmpdes;
			src = tmpsrc;
		}
	}
	if (!*src)
		return (tmpdes);
	return (NULL);
}
