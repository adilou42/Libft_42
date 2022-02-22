/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:38:03 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/08 14:26:10 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = -1;
	if ((unsigned char *)src < (unsigned char *)dest)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
		while (++i < n)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
