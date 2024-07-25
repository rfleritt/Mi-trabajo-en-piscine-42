/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:34:23 by rfleritt          #+#    #+#             */
/*   Updated: 2024/07/09 10:35:07 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main (void)
{
	int a;
	int b;
	int div;
	int mod;
	a = 10;
	b = 2;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d", mod);
	return(0);
}*/
