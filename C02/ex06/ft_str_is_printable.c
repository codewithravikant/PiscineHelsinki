/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:30:48 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/11 21:54:00 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	r;

	r = 0;
	while ((str[r]) != '\0')
	{
		if ((str[r] >= 32 && str[r] <= 126))
			r++;
		else
			return (0);
	}
	return (1);
}
/*#include<unistd.h>
int main()
{
	char str[] ="†";
	char result = ft_str_is_printable(str) + '0';
	write(1, &result,1);
	return (0);
}*/
