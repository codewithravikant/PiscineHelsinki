/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:44:22 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/11 18:39:03 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src [i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
int	main(void)
{
	char src[] = "testing";
	char dest[]= "";
	printf("%s!\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return 0;
}*/
