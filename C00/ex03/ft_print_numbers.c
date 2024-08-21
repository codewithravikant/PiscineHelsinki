/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:09:24 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/03 20:25:45 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = 47;
	while (++n < 58)
	{
		write (1, &n, 1);
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return(0);
}
*/
