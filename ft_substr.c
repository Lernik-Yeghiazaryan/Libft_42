/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:53:09 by leyeghia          #+#    #+#             */
/*   Updated: 2022/04/20 19:17:26 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	slen;

	i = 0;
	if (!s && !*s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		len = 0;
	else if (slen - start < len)
		len = slen - start;
	str = malloc(len + 1);
	while (s[start + i] && len > i)
	{
		slen = ft_strlen(s);
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
