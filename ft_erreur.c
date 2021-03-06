/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erreur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/30 13:45:15 by dbourdon          #+#    #+#             */
/*   Updated: 2016/06/13 11:37:49 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_erreur(char *str, int mode)
{
	if (mode == 1)
	{
		ft_putstr("ls: option invalide -- ");
		ft_putchar(str[0]);
		ft_putstr("\nutilisation: ls [-laRrt] [dossier ...]\n");
		exit(0);
	}
	else if (mode == 2)
	{
		ft_putstr("ls: ");
		ft_putstr(str);
		if (errno == EACCES)
			ft_putstr(": Acces interdit\n");
		if (errno == ENOENT)
			ft_putstr(": Aucun fichier ou dossier porte ce nom\n");
	}
	else if (mode == 3)
	{
		exit(0);
	}
}
