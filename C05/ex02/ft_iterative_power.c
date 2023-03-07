/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:49:45 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/23 16:06:54 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	else if ((nb == 0) || (power < 0))
		return (0);
	else
	{
		while (power > 0)
		{
			res = nb * res;
			power --;
		}
		return (res);
	}
	return (0);
}
/*int main() 
{
  int nb = 10;
  int pow = 4;
  printf("%d elevato a %d è uguale a %d", nb , pow, ft_iterative_power(nb, pow));
}*/
