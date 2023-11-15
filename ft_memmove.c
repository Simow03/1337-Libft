/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstaali <mstaali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:26 by mstaali           #+#    #+#             */
/*   Updated: 2023/11/02 21:37:21 by mstaali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*d;
	const char	*s;
	char		buffer[1024];

	d = (char *)dest;
	s = (const char *)src;
	if (size == 0)
		return (dest);
	if (d > s && d < (char *)s + size)
	{
		ft_memcpy(buffer, src, size);
		ft_memcpy(dest, buffer, size);
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
