/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakdi <ayakdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:00:43 by ayakdi            #+#    #+#             */
/*   Updated: 2021/12/09 11:21:52 by ayakdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = (void *)malloc(nmemb * size);
	if (!res)
		return (0);
	ft_bzero(res, (nmemb * size));
	return (res);
}
