/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <amalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:48:09 by amalangi          #+#    #+#             */
/*   Updated: 2024/05/24 18:20:42 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*start;

	if (nmemb && size && nmemb > (4294967295 / size))
		return (NULL);
	start = malloc(nmemb * size);
	if (!start)
		return (start);
	ft_bzero(start, nmemb * size);
	return (start);
}
