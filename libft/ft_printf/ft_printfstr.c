/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:30:07 by amalangi          #+#    #+#             */
/*   Updated: 2023/11/13 11:24:45 by amalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printfstr(char *str)
{
	int	cw;

	if (!str)
		return (write(1, "(null)", 6));
	cw = 0;
	while (str[cw])
		cw += write(1, &str[cw], 1);
	return (cw);
}
