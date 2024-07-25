/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:21:06 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/23 13:21:37 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < size && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (j);
}

/*int main()
{
	int valor;
	int valor2;
    char dest[100] = "hola";
    char src[100] = " mundo";
    
	valor = ft_strlcat(dest, src, 10);
	valor2 = strlcat(dest, src, 10);
    
    printf("%d\n", valor);
	printf("%d\n", valor2);
    return(0);
}*/