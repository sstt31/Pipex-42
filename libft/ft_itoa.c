/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:55:01 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(long qs)
{
	int	x;

	x = 0;
	if (qs <= 0)
		x++;
	while (qs != 0)
	{
		qs /= 10;
		x++;
	}
	return (x);
}

static char	*ft_converter(char *str, long tmp, int l)
{
	if (tmp == 0)
		str[0] = '0';
	str[l] = '\0';
	if (tmp < 0)
	{
		str[0] = '-';
		tmp = -tmp;
	}
	while (tmp)
	{
		--l;
		str[l] = (tmp % 10) + 48;
		tmp /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	long	tmp;

	tmp = n;
	l = ft_nlen(tmp);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	return (str = ft_converter(str, tmp, l));
}
