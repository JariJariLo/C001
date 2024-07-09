/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:32:58 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/09 11:33:05 by crjarill         ###   ########.fr       */
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
