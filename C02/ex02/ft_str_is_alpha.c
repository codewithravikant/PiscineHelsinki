/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:40:12 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/10 23:43:23 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	v;

	v = 0;
	while ((str[v]) != '\0')
	{
		if ((str[v] < 'a' || str[v] > 'z') && (str[v] < 'A' || str[v] > 'Z'))
		{
			return (0);
		}
		v++;
	}
	return (1);
}

/*#include<stdio.h>
int main(void)
{
	char str[] = "kkk";

	printf("%d", ft_str_is_alpha(str));
	return(0);
}*/
