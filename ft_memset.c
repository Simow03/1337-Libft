/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstaali <mstaali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:07:59 by mstaali           #+#    #+#             */
/*   Updated: 2023/11/02 00:01:11 by mstaali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	char	*p;
	size_t	i;

	p = (char *)ptr;
	i = 0;
	while (i < size)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}
