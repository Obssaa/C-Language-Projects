/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:55:52 by oabate            #+#    #+#             */
/*   Updated: 2022/08/23 11:07:45 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int *i;
	int *j;
	int k = 4;
	int l = 8;
	i = &k;
	j = &l;
	ft_swap(i,j);
	printf("%d %d",k, l);
	return (0);
}
