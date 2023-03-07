/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:12:49 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/25 22:36:01 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min++;
		i++;
	}
	*range = arr;
	return (i);
}
/*int	main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 20));
	while (i < 25)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
