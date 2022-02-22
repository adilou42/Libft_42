/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:48:31 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/09 14:22:23 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nb)
{
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
		return (1 + ft_nbrlen(-nb));
	if (nb > 9)
		return (1 + ft_nbrlen(nb / 10));
	return (1);
}

static long	ft_itoa_valabs(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
		return (-nb);
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		nblen;
	long	nb;

	nblen = ft_nbrlen(n);
	dest = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (!dest)
		return (NULL);
	nb = ft_itoa_valabs(n);
	dest[nblen--] = '\0';
	while (nblen >= 0)
	{
		dest[nblen] = (nb % 10) + 48;
		nb = nb / 10;
		nblen--;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
