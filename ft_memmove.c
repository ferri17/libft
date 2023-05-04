/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 01:31:45 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/05 01:34:15 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*original_dst;
	unsigned const char	*original_src;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	original_dst = (unsigned char *) dst;
	original_src = (unsigned char *) src;
	if (src < dst)
	{
		while (len-- > 0)
			*(original_dst + len) = *(original_src + len);
	}
	else
	{
		i = 0;
		while (i++ < len)
			original_dst[i] = original_src[i];
	}
	return (dst);
}
