/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:47:08 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/25 19:22:05 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) dst;
	str2 = (unsigned char *) src;
	if (str1 > str2)
		while (len--)
			*(str1 + len) = *(str2 + len);
	else if (str1 < str2)
		while (len--)
			*(str1++) = *(str2++);
	return (dst);
}
