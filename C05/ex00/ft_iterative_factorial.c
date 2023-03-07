/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:15:36 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/22 22:53:13 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb != 0)
	{
		while (i != 0)
		{
			if (nb < 0)
				return (0);
			nb *= i;
			i--;
		}
		return (nb);
	}
	return (1);
}

/*int main ()
{
	int	nb = 55;
	printf("il fattoriale di %d e' %d", nb, ft_iterative_factorial(nb));
}*/
