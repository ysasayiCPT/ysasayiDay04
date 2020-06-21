/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:52:01 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/21 14:27:53 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
    if(nb >0){	
	for(int i = nb-1; i > 0; i--)
	{
		nb = nb * i;
	}
	return nb;
	} else{
		return 0;
	}
	
}
