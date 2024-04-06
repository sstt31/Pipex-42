/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:58:54 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:59:13 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	nd_l;
	char	*h;
	char	*n;

	x = 0;
	h = (char *)haystack;
	n = (char *)needle;
	nd_l = ft_strlen(n);
	if (h == n || nd_l == 0)
		return (h);
	while (h[x] && x < len)
	{
		y = 0;
		while (h[x + y] && n[y] && h[x + y] == n[y] && x + y < len)
			y++;
		if (y == nd_l)
			return (h + x);
		x++;
	}
	return (NULL);
}
