/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:19:07 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/23 16:21:39 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if ((nb == 0) || (power < 0))
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*int main()
{
  int nb = 0;
  int pow = 9;
  printf("%d elevato a %d è uguale a %d", nb , pow, ft_recursive_power(nb, pow));
}*/
