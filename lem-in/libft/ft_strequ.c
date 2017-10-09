/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:18:00 by ysavenko          #+#    #+#             */
/*   Updated: 2016/11/28 15:32:47 by ysavenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int a;

	a = 0;
	if (s1 && s2)
	{
		while ((s1[a] == s2[a]) && s1[a] && s2[a])
			a++;
		if (s1[a] - s2[a] == 0)
			return (1);
		return (0);
	}
	return (0);
}
