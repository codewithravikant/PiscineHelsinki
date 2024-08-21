/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:40:50 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/06 23:47:15 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int i = 10;
	int j = 8;
	int *a = &i;
	int *b = &j;
	ft_swap(a, b);
	printf("Bf %d\n", *a);
	printf("Af %d\n", *b);
}*/
