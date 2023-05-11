/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:21:06 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/22 15:21:06 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sol;
	size_t	l;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	sol = (char *)malloc(l * sizeof (char));
	if (!sol)
		return (NULL);
	while (s1[i] != '\0')
	{
			sol[i] = s1[i];
			i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sol[i + j] = s2[j];
		j++;
	}
	sol[i + j] = '\0';
	return (sol);
}
