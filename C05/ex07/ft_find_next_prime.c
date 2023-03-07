/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:37:59 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/24 23:46:18 by iragusa          ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 1)
		nb++;
	return (nb);
}
