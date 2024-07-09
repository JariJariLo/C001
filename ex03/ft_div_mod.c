/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:20:10 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/06 13:39:57 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	rs;
	int	resto;

	rs = a / b;
	resto = a % b;
}

int main(void)
{
	int a;
	int b;

	int rdiv;
	int rmod;
   
	a = 20;
	b = 10;

	ft_div_mod(a, b,&rdiv, &rmod);
   
	printf("Cociente es: %d\n", rdiv);
	printf("Resto es: %d\n", rmod);
}
