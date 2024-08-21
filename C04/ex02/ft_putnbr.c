/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:43:45 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/17 18:14:15 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_digit(int nb)
{
	nb += 48;
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
	{
		ft_print_digit(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_print_digit(nb % 10);
	}
}
/*#include <stdio.h>
int main()
{
    printf("Max cap:\n");
    ft_putnbr(2147483647);
    printf("\nMin cap:\n");
    ft_putnbr(-2147483648);
    printf("\nshould be 42\n");
    ft_putnbr(42);
    printf("\nRendom negative number\n");
    ft_putnbr(-123);
    return 0;
}*/
