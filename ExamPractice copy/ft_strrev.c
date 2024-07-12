/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:50:38 by oabate            #+#    #+#             */
/*   Updated: 2022/08/23 20:44:55 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void swap(char *a, char *b)
{
	char c;
	c =*a;
	*a = *b;
	*b =c;
}
char *ft_strrev(char *str)
{
	int i;
	int j,k;
	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	k = i - 1;
	while(j < i/2)
	{
		swap(&str[j],&str[k]);
		j++;
		k--;

	}
	return (str);
}

int main()
{
	char str[] = "abcd";
	
	printf("%s\n",ft_strrev(str));
	return (0);
}
