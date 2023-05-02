/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:47:02 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/03 01:10:21 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha (int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <ctype.h> 
#include <stdio.h>

int main(void)
{
    char c = 'f';
    
    printf("My: %i\n", ft_isalpha(c));
    printf("Oficial: %i\n", isalpha(c));
}
*/