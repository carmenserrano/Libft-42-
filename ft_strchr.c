/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:24:21 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/16 13:05:24 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if ((char)c == s[i])
		return ((char *)&s[i]);
	while (s[i] != '\0')
	{
			i++;
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
