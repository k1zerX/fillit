/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 17:58:01 by kbatz             #+#    #+#             */
/*   Updated: 2018/12/26 21:29:40 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

unsigned long	ft_gbf(void *a, size_t n, size_t len)
{
	size_t	res;
	size_t	s;

	res = 0;
	c_s = sizeof(char) - 1;
	i = n * len >> c_s;
	p = ((n + 1) * len - 1) >> c_s;
	start = n * len & c_s;
	while(i <= p)
	{
		i++;
	}



	res = (a[n * len / s] << (8 - n * len & 7 - len)) >> (8 - len);
}
