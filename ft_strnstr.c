/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:56:03 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/13 15:25:57 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (*little == 0)
		return ((char *)big);
	while (*big && len--)
	{
		i = 0;
		j = 0;
		while (big[i] == little[j] && (len - j + 1 > 0))
		{
			j++;
			i++;
			if (!(little[j]))
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
