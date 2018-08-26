/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:42:42 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/26 10:46:42 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_2.h"

int		main(void)
{
	t_input	input;
	int		var[3];

	input = ft_read_input();
	var[0] = 0;
	if (ft_select_rush(input.x, input.y, input.input, var) == 0)
		ft_putstr("FAKE RUSH\n");
	else
		ft_putchar('\n');
	return (0);
}
