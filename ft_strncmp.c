/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:38:56 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/16 16:18:08 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s, const char *l, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s[i] == l[i] && s[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s[i]) - (unsigned char)(l[i]));
}
