/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:12:43 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/18 22:15:20 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power (nb, power - 1));
}
/*#include <stdio.h>
int main (void)
{
	int nb = 0;
	int power = 0;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/
