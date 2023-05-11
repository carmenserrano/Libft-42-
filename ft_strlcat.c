/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:34:13 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/16 14:38:27 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	j = 0;
	if (n <= lend)
		return (lens + n);
	i = lend;
	while ((src[j] != '\0') && ((i + 1) < n))
	{
			dst[i] = src[j];
			i++;
			j++;
	}
	dst[i] = '\0';
	return (lend + lens);
}
