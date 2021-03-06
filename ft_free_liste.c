/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_liste.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <dbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/30 14:51:16 by dbourdon          #+#    #+#             */
/*   Updated: 2016/06/06 17:59:53 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_free_liste(t_liste **lst, int *opt)
{
	if (*lst)
	{
		free((*lst)->nom);
		if ((*lst)->type != 9 && (opt[0] == 1 || opt[4] == 1 || opt[5] == 1))
		{
			free((*lst)->droits);
			free((*lst)->groupe_u);
			free((*lst)->nom_u);
			free((*lst)->date_heure);
		}
		free(*lst);
		*lst = (*lst)->next;
	}
}
