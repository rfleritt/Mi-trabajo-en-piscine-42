/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:56:58 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/23 13:20:31 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
    char x[] = "Este es un ejempl de cadena em donde queremos encontrar plo";
    char y[] = "ejemplo";

    char *result = ft_strstr(x, y);

    if (result != 0)
    {
        printf("%s\n", result);
    }
    else
    {
        printf("Cadena no encontrada.\n");
    }

    return 0;
}*/