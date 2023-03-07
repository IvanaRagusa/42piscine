/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:40:23 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/15 17:16:26 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}
/*int main(void) 
{
  int a = 6;
  int b = 3;
  ft_ultimate_div_mod(&a, &b);
  printf("risultato %d resto %d", a, b);
  return (0);
}*/
