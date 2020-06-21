/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:41:38 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/21 14:41:58 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_recursive_power(int, int);

int ft_recursive_power(int nb, int power)
{
	if (power== 1)
	{
		return nb;
	}
	else
	{
		return ft_recursive_power(nb, power-1)*nb;
	}
}

