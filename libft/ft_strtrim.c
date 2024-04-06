/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:58:54 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:59:23 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	st;
	size_t	en;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	st = 0;
	en = ft_strlen(s1);
	while (ft_strchr(set, s1[st]) && s1[st])
		st++;
	while (ft_strchr(set, s1[en - 1]) && en > st)
		en--;
	str = (char *) malloc(sizeof(char) * (en - st + 1));
	if (!str)
		return (NULL);
	str = ft_substr(s1, st, en - st);
	return (str);
}
