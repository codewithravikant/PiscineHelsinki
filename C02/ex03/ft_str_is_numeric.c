/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:58:33 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/11 21:44:15 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	v;

	v = 0;
	while ((str[v]) != '\0')
	{
		if ((str[v] >= '0' && str[v] <= '9'))
			v++;
		else
			return (0);
	}
	return (1);
}
/*
#include<stdio.h>  
int main(void)
{
	char str[] = "124124124124124124124124124124124124";
	printf("%d", ft_str_is_numeric(str));
	return(0);
}*/
