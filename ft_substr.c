/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:20:56 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/22 15:20:56 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
	sub = (char *)ft_calloc(len + 1, sizeof (char));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && start < ft_strlen(s) && i < len)
	{
			sub[i] = s[start];
			i++;
			start++;
	}
	return (sub);
}
