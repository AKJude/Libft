/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 15:53:19 by ajude             #+#    #+#             */
/*   Updated: 2016/10/19 15:53:29 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)malloc(size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		*(p + i) = 0;
		i++;
	}
	return ((void *)p);
}
