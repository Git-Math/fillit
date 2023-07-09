/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-blon <dle-blon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/28 15:47:14 by dle-blon          #+#    #+#             */
/*   Updated: 2016/03/07 20:08:30 by dle-blon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(void)
{
	ft_putendl("error");
	exit(1);
}

void	ft_check(char **file)
{
	int		i;
	int		len;
	int		q;

	i = 0;
	q = 0;
	while (file[i] != NULL)
	{
		if ((len = ft_strlen(file[i])) != 4 && len != 0)
			ft_error();
		if (len == 4)
			q++;
		if (len == 0 && q % 4 != 0)
			ft_error();
		i++;
	}
}
