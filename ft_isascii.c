/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:04:19 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/03 01:11:10 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii (int c)
{
    return (c >= 0 && c <= 127);
}
/*
#include <ctype.h> 
#include <stdio.h>

int main(void)
{
    char c = -40;
    
    printf("My: %i\n", ft_isascii(c));
    printf("Oficial: %i\n", isascii(c));
}*/