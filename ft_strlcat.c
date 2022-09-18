/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:30:37 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/24 19:27:39 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	ls;

	i = 0;
	if (!dst || !src)
		return (0);
	l = ft_strlen(dst);
	ls = ft_strlen(src);
	if (dstsize < l)
		return (ls + dstsize);
	while (src[i] && l + i + 1 < dstsize)
	{
		dst[l + i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[l + i] = 0;
	return (l + ls);
}
