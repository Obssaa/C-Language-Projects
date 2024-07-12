/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:13:12 by oabate            #+#    #+#             */
/*   Updated: 2022/08/23 15:26:41 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **argv)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] += 32;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] -= 32;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
