/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:15:49 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/16 13:01:17 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)str2;
	d = (char *)str1;
	if (!str1 && !str2)
		return (0);
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
				d[n] = s[n];
	}
	else if (d < s)
		ft_memcpy(str1, str2, n);
	return (str1);
}
