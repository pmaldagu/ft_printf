/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:26:37 by pmaldagu          #+#    #+#             */
/*   Updated: 2019/12/01 20:40:34 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char str[] = "calcul";
	int a = 'a';
	int b = -333;
	unsigned int i = -333;
	//int j = 30;

	printf("\n=============== MON PRINTF ===============\n\n");
	ft_printf("%54.-15% coucouc", b);
	printf("\n\n================= PRINTF =================\n\n");
	printf("%54.-15% coucouc", b);
	//printf("\n=============== HEX ADRSS ================\n\n");
	//printf("%s\n", ft_hexadress );
	return (0);
}
