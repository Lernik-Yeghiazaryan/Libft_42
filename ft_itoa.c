/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:54:37 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/25 19:21:00 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_foo(char *s, int a, int count)
{
	int	n;

	n = count;
	if (a == 0)
		s[0] = 48;
	else if (a < 0)
		s[0] = '-';
	while (a != 0)
	{
		if (a < 0)
			s[count - 1] = ((a % 10) * -1) + 48;
		else
			s[count - 1] = (a % 10) + 48;
		a /= 10;
		count--;
	}
	s[n] = 0;
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		num;

	i = 0;
	if (n <= 0)
		i++;
	num = n;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	str = malloc(i + 1);
	ft_foo(str, n, i);
	return (str);
}