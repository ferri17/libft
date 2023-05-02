/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:49:09 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/03 01:10:20 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum (int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
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