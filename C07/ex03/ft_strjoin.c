/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:36:38 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/26 20:09:47 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i[4];
	int		len;
	char	*out;

	i[0] = 0;
	i[1] = 0;
	if (size == 0)
	{
		out = (char *)malloc(1);
		return (out);
	}
	while (i[0] < size)
		len += ft_len(strs[i[0]++]);
	len = len + ((size - 1) * ft_len(sep));
	out = (char *)malloc(sizeof(char) * len + 1);
	if (out == NULL)
		return (0);
	i[0] = 0;
	while (i[0] < size)
	{
		i[2] = 0;
		while (strs[i[0]][i[2]] != '\0')
		{
			out[i[1]] = strs[i[0]][i[2]];
			i[2]++;
			i[1]++;
		}
		i[3] = 0;
		while (sep[i[3]] != '\0')
		{
			out[i[1]] = sep[i[3]];
			i[1]++;
			i[3]++;
		}
		i[0]++;
	}
	out[i[1]] = '\0';
	return (out);
}

/*int	main(void)
{
	char	**str;
	char	*separator;

	str = (char**)malloc(4 * sizeof(str));
	str[0] = "lol";
	str[1] = "1234";
	str[2] = "poiuic";
	str[3] = "1234";
	separator = " ";
	printf("%s", ft_strjoin(4, str, separator));
}*/
