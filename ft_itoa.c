/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajude <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 12:21:05 by ajude             #+#    #+#             */
/*   Updated: 2016/10/13 16:18:24 by ajude            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	itoa_isneg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

char	*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		neg;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	len = 2;
	neg = 0;
	itoa_isneg(&n, &neg);
	while (tmp /= 10)
		len++;
	len += neg;
	if ((s = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	s[--len] = '\0';
	while (len--)
	{
		s[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
