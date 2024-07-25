/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:45:40 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/16 19:21:06 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;

	i = 0;
	a = 0;
	while (a < size)
	{
		while (i < size)
		{
			if (tab[a] < tab[i])
			{
				temp = tab[a];
				tab[a] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		i = 0;
		a++;
	}
}

/*int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_sort_int_tab(arr, size);

    printf("Arreglo ordenado: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/