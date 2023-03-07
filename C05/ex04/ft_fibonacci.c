/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:42:07 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/23 16:46:05 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
/*int main()
{
	int 	index;
	index = ft_fibonacci(0);
	printf("%d ", index);
	index = ft_fibonacci(1);
	printf("%d ", index);
	index = ft_fibonacci(2);
	printf("%d ", index);
	index = ft_fibonacci(3);
	printf("%d ", index);
	index = ft_fibonacci(4);
	printf("%d ", index);
	index = ft_fibonacci(5);
	printf("%d ", index);
	index = ft_fibonacci(6);
	printf("%d ", index);
	index = ft_fibonacci(7);
	printf("%d ", index);
	index = ft_fibonacci(8);
	printf("%d ", index);
	index = ft_fibonacci(9);
	printf("%d ", index);
}*/
