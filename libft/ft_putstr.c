/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <paim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:28:05 by paim              #+#    #+#             */
/*   Updated: 2015/12/09 17:57:52 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	if (!str)
		return ;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}
