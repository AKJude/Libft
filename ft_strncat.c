/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 16:32:55 by ajude             #+#    #+#             */
/*   Updated: 2016/09/27 16:32:56 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	char		*d;

	d = (char*)s1;
	while (*d)
		d++;
	while (len-- && *s2)
		*d++ = *s2++;
	*d = '\0';
	return (s1);
}