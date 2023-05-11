/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:08:34 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/16 14:38:20 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates the LAST ocurrence of c (converted to a char) in the st5ring s. 
If c is '\0', locates the terminating '\0'*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
			i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}
