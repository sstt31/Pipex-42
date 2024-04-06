/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_only_for_num.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:53:01 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_only_for_num(const char *str)
{
	int		in;
	int		sign;
	long	num;

	in = 0;
	sign = 1;
	num = 0;
	while ((((str[in] > 8) && (str[in] < 14)) || str[in] == 32) && \
			str[in] != '\0')
		in++;
	if (str[in] == 43 || str[in] == 45)
		sign = (str[in++] & 2) - 1;
	while (str[in])
	{
		if (str[in] < 48 || str[in] > 57)
			ft_error("Error: not number");
		num = num * 10 + (str[in] - '0');
		in++;
	}
	num = num * sign;
	if (num > 2147483647 || num < -2147483648)
		ft_error("Error: argument not in INT");
	return ((int)num);
}
