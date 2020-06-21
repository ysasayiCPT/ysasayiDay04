/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:25:10 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/21 14:34:36 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
	if (nb>0)
	{
		if(nb == 1)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_factorial(nb-1));
		}
	}
	else
	{
		return 0;
	}
}
