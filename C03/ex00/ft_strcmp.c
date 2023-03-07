/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:13:38 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/21 18:57:37 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	k;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		k = s1[i] - s2[i];
		return (k);
	}
	return (0);
}
/*int main ()
{
char	*str1;
char	*str2;

str1 = "ciao";
str2 = "ciao";

printf ("%d", ft_strcmp (str1, str2));
printf ("%d", strcmp(str1, str2));
}*/
