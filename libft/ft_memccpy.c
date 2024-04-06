/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:56:20 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t l)
{
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	sym;

	x = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	sym = (unsigned char)c;
	while (x < l)
	{
		d[x] = s[x];
		if (s[x] == sym)
			return (d + x + 1);
		x++;
	}
	return (0);
}
