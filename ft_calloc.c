/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:29:53 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/29 20:12:38 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	int		len;
	char	*arr;

	i = 0;
	len = count * size;
	arr = malloc (len);
	if (!arr)
		return (0);
	while (len--)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
