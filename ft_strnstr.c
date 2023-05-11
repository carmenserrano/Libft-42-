/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:17:15 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/16 18:16:07 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.*/

#include "libft.h"

char	*ft_strnstr(const char *st1, const char *st2, size_t n)
{
	size_t	i;
	size_t	j;

	if (st2[0] == '\0')
		return ((char *)st1);
	i = 0;
	while (st1[i] != '\0')
	{
		j = 0;
		while (st1[i + j] == st2[j] && (i + j) < n)
		{
			if (st1[i + j] == '\0' && st2[j] == '\0')
				return ((char *)&st1[i]);
			j++;
		}
		if (st2[j] == '\0')
			return ((char *)&st1[i]);
		i++;
	}
	return (NULL);
}
