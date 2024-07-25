/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:52:31 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/15 17:59:16 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
		str[i] = str[i];
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    char str[] = "JBGGVUVBBbhbugvtycRCTCtyVvYCYcvTGV";

	ft_strlowcase(str);
	printf("%s\n", str);
    return (0);
}*/
