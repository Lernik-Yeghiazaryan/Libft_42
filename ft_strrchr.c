/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:47:51 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/16 18:01:51 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = 0;
	if (!(c >= 0 && c <= 127))
		return ((char *) s);
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *) s + len);
		len--;
	}
	return (0);
}
