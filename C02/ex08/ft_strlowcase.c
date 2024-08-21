/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@stduent.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:36:37 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/12 12:38:18 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	r;

	r = 0;
	while ((str[r]) != '\0')
	{
		if (str[r] >= 'A' && str[r] <= 'Z')
			str[r] += 32;
		r++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char r[] = "This is Awesome 00000 :)";
    printf("%s\n", ft_strlowcase(r));
}*/
