/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:20:34 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/25 20:16:25 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*write_line00(char *str, int l, int x, int y)
{
	int c;

	c = 0;
	while (c < x)
	{
		if ((c == 0 || c == x - 1) && (l == 0 || l == y - 1))
			str[c] = 'o';
		else if (l == 0 || l == y - 1)
			str[c] = '-';
		else if (c == 0 || c == x - 1)
			str[c] = '|';
		else
			str[c] = ' ';
		c++;
	}
	return (str);
}

char	*rush00(int x, int y, char *str)
{
	int	l;
	int	i;

	if (x <= 0 || y <= 0)
		return ((void*)0);
	l = 0;
	i = 0;
	while (l < y)
	{
		str = write_line00(str + i, l, x, y);
		str -= i;
		i += x;
		str[i] = '\n';
		l++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
