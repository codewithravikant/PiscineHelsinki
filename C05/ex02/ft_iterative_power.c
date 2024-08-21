/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 00:09:37 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/18 22:12:53 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	k;

	i = 0;
	k = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power - 1)
	{
		k = k * nb;
		i++;
	}
	return (k);
}
/*#include <stdio.h>
int main (void)
{
    int i = 2;
    int power = 5;
    printf("%d", ft_iterative_power(i, power));
    return (0);
}*/
