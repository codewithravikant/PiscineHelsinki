/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:16:43 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/17 21:03:52 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	rese;
	int	j;

	j = 0;
	i = 0;
	rese = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			j++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rese = rese * 10 + (str[i] - '0');
		i++;
	}
	if (j % 2 == 0)
		return (rese);
	else
		return (-rese);
}

/*int	main(void)
{
	char str[] = " ---+--+1234ab567";
	int value;
	
	printf("Original string: %s\n", str);
	value = ft_atoi(str);
	printf("Converted string; %d\n", value);
	return (0);
}*/
