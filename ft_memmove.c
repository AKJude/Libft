/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 21:09:31 by ajude             #+#    #+#             */
/*   Updated: 2016/09/23 21:09:33 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*s;

	d = (char*)dst;
	s = (char*)src;
	if (s < d)
	{
		s += len;
		d += len;
		while (len)
		{
			*--d = *--s;
			--len;
		}
	}
	else
		while (len)
		{
			*d++ = *s++;
			--len;
		}
	return (dst);
}
