/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindmin_val.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:55:44 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfindmin_val(t_list *lst)
{
	int	min_value;

	min_value = (int)lst->content;
	while (lst)
	{
		if (min_value > (int)lst->content)
			min_value = (int)lst->content;
		lst = lst->next;
	}
	return (min_value);
}
