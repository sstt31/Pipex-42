/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindmax_val.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:55:39 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfindmax_val(t_list *lst)
{
	int	max_value;

	max_value = (int)lst->content;
	while (lst)
	{
		if (max_value < (int)lst->content)
			max_value = (int)lst->content;
		lst = lst->next;
	}
	return (max_value);
}
