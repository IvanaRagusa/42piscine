/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:31:41 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/21 18:07:17 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > '9' || str[i] < '0'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char str[] = "11112,";
	printf("%d", ft_str_is_numeric(str));

}*/
