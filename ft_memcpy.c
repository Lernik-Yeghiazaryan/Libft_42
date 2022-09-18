/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:58:40 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/29 17:43:31 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (0);
	str1 = (unsigned char *) dst;
	str2 = (unsigned char *) src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
