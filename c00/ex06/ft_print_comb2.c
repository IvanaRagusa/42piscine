/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:53:36 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/10 22:00:23 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	arr[4];
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			arr[2] = b / 10 + '0';
			arr[3] = b % 10 + '0';
			b++;
			arr[0] = a / 10 + '0';
			arr[1] = a % 10 + '0';
			write (1, &arr[0], 1);
			write (1, &arr[1], 1);
			write (1, &" ", 1);
			write (1, &arr[2], 1);
			write (1, &arr[3], 1);
			if (a != 98)
				write (1, &", ", 2);
		}
		a++;
	}
}
