/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:31:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/03 00:48:17 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (int c)
{
    return ((c >= '0' && c <= '9'));
}
/*
#include <ctype.h> 
#include <stdio.h>

int main(void)
{
    char c = 'a';
    
    printf("My: %i\n", ft_isdigit(c));
    printf("Oficial: %i\n", isdigit(c));
}
*/