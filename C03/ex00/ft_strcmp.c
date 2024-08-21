/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:04:18 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/14 17:12:40 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
int main()
{
	char *r = "Hel";
	char *a = "Hello";
	printf("%d\n", ft_strcmp(r, a));
	return (0);
}*/
