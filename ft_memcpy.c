/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 01:04:16 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/04 01:30:41 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *original_dst;
    const char *original_src;
    size_t i;

    if (!src && !dst)
        return (NULL);
    original_dst = (char *) dst;
    original_src = (char *) src;
    i = 0;
    while (i < n)
    {
        original_dst[i] = original_src[i];
        i++;
    }
    return (dst);
}