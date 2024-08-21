/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:41:05 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/19 23:27:29 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	k;

	k = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		k = k * i;
		i++;
	}
		return (k);
}

#include <stdio.h>
int main (void)
{
	int i = 4;
	printf("%d", ft_iterative_factorial(i));
	return(0);
}
