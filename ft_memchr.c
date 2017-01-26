/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 22:30:00 by ajude             #+#    #+#             */
/*   Updated: 2016/09/23 22:30:01 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	ch;
	int				i;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char*)s;
	while (len--)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}
