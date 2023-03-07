/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:06:03 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/23 19:28:30 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / 2 && nb % i != 0)
		i++;
	if (i == nb || i == nb / 2)
		return (1);
	return (0);
}
/*int main ()
{
  int i;
    i = 0;
    printf ("%d\n", ft_is_prime(i));
    i = 2;
    printf ("%d\n", ft_is_prime(i));
    i = 2147483647;
    printf ("%d\n", ft_is_prime(i));
    i = 13;
    printf ("%d\n", ft_is_prime(i));
    i = 6;
    printf ("%d\n", ft_is_prime(i));
    i = 10;
    printf ("%d\n", ft_is_prime(i));
 return (0);
}*/
