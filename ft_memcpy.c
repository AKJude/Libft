/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 17:43:52 by ajude             #+#    #+#             */
/*   Updated: 2016/09/21 17:43:53 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	int				i;

	i = 0;
	d = dst;
	s = src;
	while (len > 0)
	{
		d[i] = s[i];
		i++;
		len--;
	}
	return (dst);
}
