/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:45:36 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/21 14:48:48 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_iterative_power(int, int);

int ft_iterative_power(int nb, int power)
{
	int result = 1;
	if (power>0)
	{
		for(int i = 0; 1<power; i--)
		{
			result *= nb;
		}
		return result;
	}
	else
	{
		return 0;
	}
}
