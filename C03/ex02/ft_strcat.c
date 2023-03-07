/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:34:53 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/21 23:44:47 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len ++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		k;
	int		len;

	k = 0;
	len = ft_strlen(dest);
	while (src[k] != '\0')
	{
		dest[len + k] = src[k];
		k++;
	}
	dest[len + k] = '\0';
	return (dest);
}
/*int main ()
{
char	str1[40] = "yyyiyiiyiy";
char	str2[8] = "iiiii";
printf ("%s\n", ft_strcat(str1, str2));
printf ("%s\n", strcat(str1, str2));
return 0;
}*/
