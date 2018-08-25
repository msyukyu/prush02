/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:20:34 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/12 03:59:35 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x <= 0)
		return ;
	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if (c + l == 0 || c + l == x + y - 2)
				ft_putchar('/');
			else if ((l == 0 && c == x - 1) || (l == y - 1 && c == 0))
				ft_putchar('\\');
			else if (l == 0 || l == y - 1 || c == 0 || c == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
