/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:47:32 by oabate            #+#    #+#             */
/*   Updated: 2022/08/23 15:05:45 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int main(int ac, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac != 4)
	{
		write(1,"\n",1);
		exit(0);
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1,"\n",1);
		exit(0);
	}
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] == argv[2][j])
			argv[1][i] = argv[3][j];
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
