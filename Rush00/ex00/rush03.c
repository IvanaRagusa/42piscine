/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaldi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:33:12 by fnaldi            #+#    #+#             */
/*   Updated: 2022/05/07 18:38:30 by fnaldi           ###   ########.fr       */
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
			if (((c == 1 && r == 1) || (r == 1 && c == y)))
				ft_putchar('A');
			else if (((r == x && c == 1) || (r == x && c == y)))
				ft_putchar('C');
			else if (c > 1 && r > 1 && c < y && r < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			r++;
		}
		ft_putchar('\n');
		c++;
	}
}
