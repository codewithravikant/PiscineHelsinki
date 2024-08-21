/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:03:17 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/18 20:19:17 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
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
		return (1);
	return (0);
}

/*#include <stdio.h>
int main (void)
{
	int i = 37;
	printf("%d", ft_is_prime(i));
	return(0);
}*/
