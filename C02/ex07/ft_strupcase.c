/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:59:34 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/15 17:58:12 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
		str[i] = str[i];
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
    char str[] = "hola";

	ft_strupcase(str);
	printf("%s\n", str);
    return (0);
}*/
