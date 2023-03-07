/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:32:57 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/21 19:37:46 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int		main(void)
{
	char	dest[30];
	char	*src;

	src = "Bonjour les chacaux";
	printf(".%s.\n\n", ft_strcpy(dest, src));
	printf(".%s.\n\n", strncpy(dest, src));
}*/
