/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:48:04 by cserrano          #+#    #+#             */
/*   Updated: 2023/03/22 15:48:04 by cserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.*/

static	size_t	ft_numlen(long x)
{
	size_t	c;

	c = 0;
	if (x == 0)
		c++;
	if (x < 0)
	{
		x *= -1;
		c++;
	}
	while (x > 0)
	{
		x /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	n1;

	n1 = (long)n;
	len = ft_numlen(n1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n1 == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 *= -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 /= 10;
		len--;
	}
	return (str);
}
