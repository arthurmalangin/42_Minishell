/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:03:48 by amalangi          #+#    #+#             */
/*   Updated: 2023/11/07 12:11:40 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nel;

	nel = malloc(sizeof(t_list));
	if (!nel)
		return (NULL);
	nel->content = content;
	nel->next = NULL;
	return (nel);
}
