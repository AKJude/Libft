/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 18:01:11 by ajude             #+#    #+#             */
/*   Updated: 2017/01/25 18:16:09 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] && i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char *p1 = "RajaRaja";
	char *p2;
	p2 = strndup(p1, 4);
	printf("Duplicated string is: %s", p2);
	ft_strdel(&p2);
	p2 = ft_strndup(p1, 4);
	printf("Duplicated string is: %s", p2);
	return (0);
}
