/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@stduent.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:40:25 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/12 20:21:41 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)

{
	int	r;

	r = 0;
	while ((str[r]) != '\0')
	{
		if (str[r] >= 'a' && str[r] <= 'z')
		{
			r++;
		}
		else
		{	
			return (0);
		}
	}
	return (1);
}
/*
#include<unistd.h>
#include<stdio.h>
int main()
{
	char str[] = "hi";
	printf("%d\n", ft_str_is_lowercase(str));
	char result = ft_str_is_lowercase(str) + '0';
	write(1, &result, 1);
	return (0);
}*/
