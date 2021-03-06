/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointe_fin_lst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/07 11:29:12 by dbourdon          #+#    #+#             */
/*   Updated: 2016/05/21 16:23:17 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_liste	*ft_pointe_fin_lst(t_liste **liste)
{
	t_liste		*tmp;

	tmp = NULL;
	if (liste)
		tmp = *liste;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}
