/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_ind_of_max_value.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:55:25 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfind_ind_of_max_value(t_list *lst)
{
	int	max_value;
	int	max_ind;
	int	it;

	max_ind = 0;
	max_value = (int)lst->content;
	lst = lst->next;
	it = 1;
	while (lst)
	{
		if ((int)lst->content > max_value)
		{
			max_ind = it;
			max_value = (int)lst->content;
		}
		lst = lst->next;
		it++;
	}
	return (max_ind);
}
