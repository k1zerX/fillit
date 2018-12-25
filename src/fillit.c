/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 21:01:05 by kbatz             #+#    #+#             */
/*   Updated: 2018/12/25 20:32:17 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_get_tetrimino(char *tetrimino, int fd)
{
	char	*str;
	char	i;
	char	j;

	if (get_next_line(fd, &str))







	i = -1;
	while (++i < 4 && get_next_line(fd, &str) > 0)
	{
		tetrimino[i % 2] = 0;
		p = 1;
		j = -1;
		while (str[++j])
		{
			if (str[j] == g_symbs[1])
				tetrimino[i & 1] += g_bit_digits[i] * (1 + (i & 1) * 15);
		}
	}
}

int		main(int ac, char *av[])
{
	int		fd;
	char	tetriminos[52];

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	while (1){}
	return (0);
}
