/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:51:45 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/10 15:34:19 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *xp, int *yp)
{
	int		temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		temp;
	int		i;
	int		j;
	int		min;

	i = 0;
	j = 0;
	while (i < size -1)
	{
		min = i;
		j = i;
		while (j++ < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		swap (&tab[min], &tab[i]);
		i++;
	}
}
/*int main(void) {
    int tab[9] = {9, 5, 2, 3, 8, 4, 16, 20, 24};
    ft_sort_int_tab(tab, 9);
    for (int i = 0; i < 9; i++) {
        printf("%d ", tab[i]);
    }
}
  */
