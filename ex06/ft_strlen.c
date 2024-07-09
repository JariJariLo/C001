/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:19:12 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/05 14:32:00 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i=0;
	

	while(str[i]!='\0')
	{
		i++;

	}

	return i;
}

int main (){

	char c[]="hola";
	int i=ft_strlen(c);
	printf("Valor %d",i);
}
