/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:09:20 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/25 22:26:57 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	num = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (min >= max)
	{
		*num = NULL;
		return (0);
	}
	while (min < max)
	{
		num[i] = min++;
		i++;
	}
	return (num);
}
/*int main()
{
	int *arr;
	int i;
	int min=-5;
	int max=5;

	arr=ft_range(min, max);
	i = 0;
	while (i < (max-min))
	{	
		printf("%d ", arr[i]);
		i++;
	}
}*/
