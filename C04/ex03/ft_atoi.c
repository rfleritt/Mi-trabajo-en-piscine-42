/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:08:23 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/25 18:26:02 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	num;

	num = 0;
	n = 1;
	i = 0;
	while ((str[i] == '\n' || str[i] == '\v')
		|| (str[i] == '\f' || str[i] == '\r')
		|| (str[i] == '\t' || str[i] == ' '))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * n);
}

int main()
{
	int x;
	
	x = ft_atoi("");
	printf("%d", x);
	return (0);
}