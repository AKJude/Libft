/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:44:49 by ajude             #+#    #+#             */
/*   Updated: 2016/09/23 16:44:49 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		ch;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	ch = (unsigned char)c;
	while (len)
	{
		if ((*d++ = *s++) == ch)
			return (d);
		len--;
	}
	return (0);
}
