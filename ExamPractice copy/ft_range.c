/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:00:28 by oabate            #+#    #+#             */
/*   Updated: 2022/08/24 12:50:48 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int *ft_range(int start, int end)
{
	int i;
	int *ptr;
	int diff = end - start;
	i = 0;
	if (diff < 0)
		diff *= -1;
	ptr = (int *) malloc ((diff + 1)*sizeof(int));
	while(i <=  (diff))
	{
		if (end < start)
			{
				ptr[i] = start;
				start--;
			}
		else
		{
			ptr[i] = start;
			start++;
		}
		i++;
	}
	return (ptr);

}
int main()
{
	int i= 0;
	int start = 0;
	int end = 0;
	int diff = end - start;
	if (diff < 0)
		diff *= -1;
	while(i <= diff)
	{
		printf("%d",ft_range(start, end)[i]);
		i++;
	}
	printf("\n");
	return (0);
}
