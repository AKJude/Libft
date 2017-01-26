/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 01:25:57 by ajude             #+#    #+#             */
/*   Updated: 2016/09/27 01:25:58 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end;
	size_t	k;

	k = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	end = i;
	while (src[k] && i < size - 1)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	if (end < size)
		dst[i] = '\0';
	return (end + ft_strlen(src));
}
