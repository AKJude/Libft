/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 07:06:55 by ajude             #+#    #+#             */
/*   Updated: 2016/09/30 07:06:56 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char	*lit;

	i = 0;
	lit = (char*)little;
	if (lit[i] == 0)
		return ((char*)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i] && big[i + j] == lit[j])
		{
			j++;
			if (lit[j] == '\0')
				return (char*)big + i;
		}
		i++;
	}
	return (0);
}
