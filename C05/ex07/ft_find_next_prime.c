/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:35:56 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/19 16:28:23 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	i;
	int	k;

	i = 2;
	k = 0;
	if ((nb == 1) || (nb == 0))
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			k++;
		i++;
	}
	if (k == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*#include <stdio.h>
int main (void)
{
	int i = 72;
	printf("%d", ft_find_next_prime(i));
	return (0);
}*/
