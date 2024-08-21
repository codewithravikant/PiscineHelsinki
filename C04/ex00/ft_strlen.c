/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:31:53 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/17 21:09:43 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int	main()
{
	char *mystring = "Hello, from the other side";
	int length = ft_strlen(mystring);
	printf("Length of the sting is: %d\n", length);
}*/
