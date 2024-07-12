/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabate <oabate@student.42abudhabi.ae.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:26:48 by oabate            #+#    #+#             */
/*   Updated: 2022/08/23 18:46:38 by oabate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int ac, char **argv)
{
	int j;
	j = 0;

	if (ac < 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while(argv[ac-1][j] != '\0')
	{
		write(1, &argv[ac -1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
