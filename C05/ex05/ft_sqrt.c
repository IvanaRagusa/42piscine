/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:48:57 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/24 23:22:17 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i == 46341)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int main ()
{
  int i;
    i = 0;
    printf ("la radice quadrata di %d è %d\n", i, ft_sqrt(i));
    i = 1;
    printf ("la radice quadrata di %d è %d\n", i, ft_sqrt(i));
    i = 2;
    printf ("la radice quadrata di %d è %d\n", i, ft_sqrt(i));
    i = 64;
    printf ("la radice quadrata di %d è %d\n", i, ft_sqrt(i));
    i = 2147488281;
    printf ("la radice quadrata di %d è %d\n", i, ft_sqrt(i));
    i = 2147395600;
    printf ("la radice quadrata di %d è %d", i, ft_sqrt(i));
    return (0);
}*/
