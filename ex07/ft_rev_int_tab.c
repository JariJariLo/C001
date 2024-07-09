/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:32:49 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/05 15:05:01 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i=0;
while(i<size/2){
	temp=tab[i];
	tab[i]=tab[size-i-1];
	tab[size-i-1]=temp;
	i++,
}

}


int main()
{
	int array[]={1,2,3,4,5};
	int size=5;
	ft_rev_int_tab(array,size);
	for(int i=0;i<=size;i++)
	{
		printf("valor del array al revés,%d",array[i]);
	}

}
