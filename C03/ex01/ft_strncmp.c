/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:28:11 by iragusa           #+#    #+#             */
/*   Updated: 2022/05/17 23:32:29 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
printf("strncmp(\"a\", \"a\") = %d\n", ft_strncmp("a", "a", 1) );
printf("strncmp(\"a\", \"b\") = %d\n", ft_strncmp("a", "b", 1) );
printf("strncmp(\"a\", \"c\") = %d\n", ft_strncmp("a", "c", 1) );
printf("strncmp(\"z\", \"d\") = %d\n", ft_strncmp("z", "d", 1) );
printf("strncmp(\"a\", \"a\") = %d\n", strncmp("a", "a", 1) );
printf("strncmp(\"a\", \"b\") = %d\n", strncmp("a", "b", 1) );
printf("strncmp(\"a\", \"c\") = %d\n", strncmp("a", "c", 1) );
printf("strncmp(\"z\", \"d\") = %d\n", strncmp("z", "d", 1) );
printf("strncmp(\"abc\", \"abe\") = %d\n", ft_strncmp("abc", "abe", 1) );
return (0);
}*/
