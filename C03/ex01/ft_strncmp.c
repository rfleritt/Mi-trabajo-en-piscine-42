/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:23:12 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/23 13:21:07 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main()
{
	int valor2;
	int valor;
	char x[] = "ññ";
	char y[] = "ññ";

	valor = ft_strncmp(x, y, 5);
	valor2 = strncmp(x, y, 5);
	
	printf("%d\n", valor);
	printf("%d\n", valor2);
}*/