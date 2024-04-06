/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_ind_of_min_value.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:51:16 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:55:33 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfind_ind_of_min_value(t_list *lst)
{
	int	min_value;
	int	min_ind;
	int	it;

	min_ind = 0;
	min_value = (int)lst->content;
	lst = lst->next;
	it = 1;
	while (lst)
	{
		if ((int)lst->content < min_value)
		{
			min_ind = it;
			min_value = (int)lst->content;
		}
		lst = lst->next;
		it++;
	}
	return (min_ind);
}
