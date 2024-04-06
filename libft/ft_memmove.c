/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:56:40 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	size_t	x;

	if (src == dst)
		return (dst);
	if (src < dst)
	{
		x = l;
		while (x--)
			*((char *)dst + x) = *((char *)src + x);
	}
	else
	{
		x = 0;
		while (x < l)
		{
			*((char *)dst + x) = *((char *)src + x);
			x++;
		}
	}
	return (dst);
}
