/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:00:20 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/15 00:01:06 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	a = 0;
	while (src[a] != '\0')
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char src[10] = "abc";
	char dest[10] = "123";

	printf("str: %s\n", ft_strcat(dest, src));
	return (0);
}*/
