/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:53:53 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/10 22:08:34 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_if(int *arr)
{
	if (arr[0] < arr[1] && arr[1] < arr[2])
	{
		write (1, &arr[0], 1);
		write (1, &arr[1], 1);
		write (1, &arr[2], 1);
		if (!(arr[0] == '7' && arr[1] == '8' && arr[2] == '9'))
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	arr[3];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = '0';
	while (arr[0] <= '9' && arr[1] <= '9' && arr[2] <= '9')
	{
		arr[2]++;
		while (arr[2] > '9')
		{
			arr[2] = '0';
			arr[1]++;
		}
		while (arr[1] > '9')
		{
			arr[2] = '0';
			arr[1] = '0';
			arr[0]++;
		}
		ft_if(arr);
	}
}

/*int main ()
{
ft_print_comb();
}*/
