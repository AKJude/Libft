/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 07:07:11 by ajude             #+#    #+#             */
/*   Updated: 2016/09/30 07:07:12 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	int		n;

	n = 0;
	ch = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ch = (char *)s;
		s++;
	}
	if (c == '\0')
		return (char*)s;
	return (ch);
}
