/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandit <rpandit@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:12:54 by rpandit           #+#    #+#             */
/*   Updated: 2024/08/11 23:31:37 by rpandit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	r;

	r = 0;
	while ((str[r]) != '\0')
	{
		if (str[r] >= 'a' && str[r] <= 'z')
			str[r] -= 32;
		r++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char r[] = "rrR";
	printf("%s\n", ft_strupcase(r));
}*/
