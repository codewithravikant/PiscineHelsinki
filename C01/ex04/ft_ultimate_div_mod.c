/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:52:15 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/07 17:17:28 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include<stdio.h>
int	main(void)
{
	int w = 8;
	int q = 7;

	ft_ultimate_div_mod(&w, &q);

	printf("a %d\n", w);
	printf("b %d\n",q);
	return 0;
}*/
