/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:17:28 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/07 14:50:59 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>
#include<unistd.h>

int	main(void)
{
	int a;
	int b;
	ft_div_mod(5, 4, &a, &b);
	printf("Division %d\n",a);
	printf("Remainder %d\n",b);
}
*/
