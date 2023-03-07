/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:46:26 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/16 19:10:19 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void) 
{
	int	c;
	int	d;
	int	*div = &c;
	int	*mod = &d;
	ft_div_mod(5, 6, div, mod);
	printf("risultato %ls resto %ls", div, mod);
	return (0);
}
*/
