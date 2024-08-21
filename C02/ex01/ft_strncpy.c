/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:26:33 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/12 20:34:46 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include<stdio.h>
int main(void)
{
	char src[] = "testing from src ";
	char dest[15]= "";
	unsigned int n = 20;
	printf("%s!\n", src);
	ft_strncpy(dest, src,n);
	printf("%s\n", dest);
	return(0);
}*/
