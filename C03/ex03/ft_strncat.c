/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpadit@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:04:14 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/15 20:50:38 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main()
{
	char src[] = "Pannnnnn";
	char dest[] = "apple";
	unsigned	int nb = 4;

	printf("%s, %s\n", src, dest);

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
	return (0);
}
