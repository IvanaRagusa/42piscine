/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:33:38 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/15 16:34:13 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	print_char(int b)
{
	b = b + 48;
	write(1, &b, 1);
}

void	zero(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
}

void	stampa(int i, int *v)
{
	while (i != 0)
	{
		write (1, &v[i - 1], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int	v[10];
	int	i;

	i = 0;
	zero(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		v[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	stampa(i, v);
}
/*int main ()
{
	ft_putnbr(42);
}*/
