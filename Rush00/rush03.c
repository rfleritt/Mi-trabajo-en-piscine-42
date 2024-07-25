/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <rfleritt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:46:44 by jainavas          #+#    #+#             */
/*   Updated: 2024/07/10 18:40:20 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char a);

void	rightmv(int x)
{
	ft_putchar('A');
	x--;
	while (x > 0)
	{
		if (x == 1)
		{
			ft_putchar('C');
			break ;
		}
		if (x >= 2)
		{
			ft_putchar('B');
		}
		x--;
	}
}

void	downmv(int x, int y, int h)
{
	while (y > 0)
	{
		if (y > 2)
		{
			ft_putchar('\n');
			ft_putchar('B');
			while (h > 2)
			{
				ft_putchar(' ');
				h--;
			}
			h = x;
			if (x > 2)
			{
				ft_putchar('B');
			}
		}
		if (y == 2)
		{
			ft_putchar('\n');
		}
		y--;
	}
}

int	rush(int x, int y)
{
	int	h;

	h = x;
	if (x == 1)
	{
		ft_putchar('A');
	}
	if (x > 1)
	{
		rightmv (x);
	}
	if (y > 1)
	{
		downmv (x, y, h);
		rightmv (x);
	}
	return (0);
}
