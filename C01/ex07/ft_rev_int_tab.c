/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:38:14 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/16 19:34:53 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int main()
{
    int tab[5] = {0, 1, 2, 3, 4};

    ft_rev_int_tab(tab, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/