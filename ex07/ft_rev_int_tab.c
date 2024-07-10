/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:32:49 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/10 15:20:41 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		fin;

	i = 0;
	fin = size -1 ;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[fin - i];
		tab[fin - i] = temp;
		i++;
	}
}

/* int	main()
{
	int array[]={1,2,3,4,5};
	int size=5;
	ft_rev_int_tab (array, size);
	for(int i = 0; i <= size; i++)
	{
		printf("%d",array[i]);
	}
} */