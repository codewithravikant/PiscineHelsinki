/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:49:36 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/11 19:02:47 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	r;

	r = 0;
	while ((str[r]) != '\0')
	{
		if ((str[r] >= 'A' && str[r] <= 'Z'))
			r++;
		else
			return (0);
	}
	return (1);
}
/*
#include<unistd.h>
int	main()
{
	char str[] = "";
	char result = ft_str_is_uppercase(str) + '0';
	write(1, &result, 1);
	return(0);
}*/
