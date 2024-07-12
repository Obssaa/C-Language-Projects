/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:53:02 by oabate            #+#    #+#             */
/*   Updated: 2022/08/24 19:59:31 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int is_white(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\f'
            || c == '\n' || c == '\r')
		return (1);
	else
		return (0);
}


int ft_count_splitter_words(char *str)
{
	int i= 0;
	int c = 0;
	while(str[i])
	{
		while(is_white(str[i]) == 1)
			i++;
		if(str[i] == '\0')
			break;
		while(is_white(str[i]) == 0 && str[i] !='\0') 
			i++;
		c++;
	}
	return (c);
	
}
char *ft_str_n_duplicate(char *str, int n)
{
	int i;
	char *ptr;
	i = 0;
	ptr = (char *) malloc ((n +1) * sizeof(char));
	while(str[i] != '\0' && i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	while(i < n + 1)
	{
		ptr[i] = '\0';
	}
	return (ptr);
}

char **ft_split(char *str)
{
	int i = 0;
	char **arr;
	char *start;
	int words;
	words = ft_count_splitter_words(str);
	arr = (char **) malloc ((words + 1)*sizeof(char));
	while(i < words)
	{
		while(is_white(*str) == 1)
			str++;
		if (*str != '\0')
			break;
		start = str;
		while(is_white(*str) == 0 && *str != '\0')
			str++;
		arr[i] = ft_str_n_duplicate(start, str - start);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
