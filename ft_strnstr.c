/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 06:16:44 by ajude             #+#    #+#             */
/*   Updated: 2016/09/30 06:16:48 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		n;
	char		*lit;

	lit = (char*)little;
	n = ft_strlen(lit);
	if (*lit == '\0')
		return ((char*)big);
	while (*big != '\0' && len-- >= n)
	{
		if (*big == *lit && ft_memcmp(big, lit, n) == 0)
			return ((char*)big);
		big++;
	}
	return (0);
}
