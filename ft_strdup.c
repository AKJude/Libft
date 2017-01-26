/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:12:35 by ajude             #+#    #+#             */
/*   Updated: 2016/09/22 17:12:39 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*c;

	len = ft_strlen(str) + 1;
	if (!(c = (char *)malloc(len)))
		return (NULL);
	if (c)
		ft_memcpy(c, str, len);
	return (c);
}
