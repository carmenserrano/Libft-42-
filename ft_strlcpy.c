/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:24:59 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/15 15:33:57 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while ((src[i] != '\0') && (i < (n - 1)))
		{
				dst[i] = src[i];
				i++;
		}
			dst[i] = 0;
	}
	return (ft_strlen(src));
}
