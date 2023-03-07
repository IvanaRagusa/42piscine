/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:33:12 by fnaldi            #+#    #+#             */
/*   Updated: 2022/05/08 12:14:06 by fnaldi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	r;
	int	c;

	c = 1;
	while (c <= y)
	{
		r = 1;
		while (r <= x)
		{
			if (((c == 1 && r == 1) || (r == x && c == y)))
				ft_putchar('o');
			else if (((r == 1 && c == y) || (r == x && c == 1)))
				ft_putchar('o');
			else if ((r > 1 && c == y) || (r >= 2 && r <= x && c == 1))
				ft_putchar('-');
			else if (c > 1 && r > 1 && c < y && r < x)
				ft_putchar(' ');
			else
				ft_putchar('|');
			r++;
		}
		ft_putchar('\n');
		c++;
	}
}
