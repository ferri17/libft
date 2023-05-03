/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sheet.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:18:42 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/04 01:29:19 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    printf("-_-_-_-------------------------_-_-_\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("-------WELCOME TO LIBFT TEST--------\n");
    printf("------------------------------------\n");
    printf("------------------------------------\n");
    printf("-_-_-_-------------------------_-_-_\n");

    
    printf("\n\n::::::__isalpha__::::::\n");
    printf("Is 4 alpha: %i, real: %i\n", ft_isalpha('4'), isalpha('4'));
    printf("Is 0 alpha: %i, real: %i\n", ft_isalpha('0'), isalpha('0'));
    printf("Is r alpha: %i, real: %i\n", ft_isalpha('r'), isalpha('r'));

    printf("\n\n::::::__isdigit__::::::\n");
    printf("Is 9 digit: %i, real: %i\n", ft_isdigit('9'), isdigit('9'));
    printf("Is 0 digit: %i, real: %i\n", ft_isdigit('0'), isdigit('0'));
    printf("Is r digit: %i, real: %i\n", ft_isdigit('r'), isdigit('r'));

    printf("\n\n::::::__isalnum__::::::\n");
    printf("Is 4 alnum: %i, real: %i\n", ft_isalnum('4'), isalnum('4'));
    printf("Is _ alnum: %i, real: %i\n", ft_isalnum('_'), isalnum('_'));
    printf("Is r alnum: %i, real: %i\n", ft_isalnum('r'), isalnum('r'));
    printf("Is [ alnum: %i, real: %i\n", ft_isalnum('['), isalnum('['));

    printf("\n\n::::::__isascii__::::::\n");
    printf("Is 127 ascii: %i, real: %i\n", ft_isascii(127), isascii(127));
    printf("Is 128 ascii: %i, real: %i\n", ft_isascii(128), isascii(128));
    printf("Is -3 ascii: %i, real: %i\n", ft_isascii(-3), isascii(-3));
    printf("Is 0 ascii: %i, real: %i\n", ft_isascii(0), isascii(0));

    printf("\n\n::::::__isprint__::::::\n");
    printf("Is -1 print: %i, real: %i\n", ft_isprint(-1), isprint(-1));
    printf("Is 32 print: %i, real: %i\n", ft_isprint(32), isprint(32));
    printf("Is 127 print: %i, real: %i\n", ft_isprint(127), isprint(127));

    printf("\n\n::::::__strlen__::::::\n");
    printf("Length of 'Hello world.': %lu, real: %lu\n", ft_strlen("Hello world."), strlen("Hello world."));
    printf("Length of '': %lu, real: %lu\n", ft_strlen(""), strlen(""));
    printf("Length of 'La libreria es del librero.': %lu, real: %lu\n", ft_strlen("La librería es del librero."), strlen("La librería es del librero."));

    printf("\n\n::::::__memset__::::::\n");
	char ft_str[30] = "Memset is not a meme.";
	ft_memset(ft_str + 10, '-', 3);
	char str[30] = "Memset is not a meme.";
	memset(str + 10, '-', 3);
	printf("'Memset is not a meme.' memset (str + 10,'-', 3) : %s, real : %s\n", ft_str, str);

	printf("\n\n::::::__bzero__::::::\n");
	char ft_str2[30] = "Is bzero a meme too?";
    ft_bzero(ft_str2, 3);
    char str2[30] = "Is bzero a meme too?";
    bzero(str2, 3);
	printf("'Is bzero a meme too?' bzero (3) : %s, real: %s\n", ft_str2 + 3, str2 + 3);

    printf("\n---- memcpy ----\n");
	char src_real1[50];
	char src_test1[50];
	char dest_real1[50];
	char dest_test1[50];
	strcpy(src_real1, "Lorem ipsum dolor sit amet");
	strcpy(src_test1, "Lorem ipsum dolor sit amet");
	strcpy(dest_real1, "consectetur adipiscing");
	strcpy(dest_test1, "consectetur adipiscing");
	printf("src content : %s, dest content : %s\n", src_real1, dest_real1);
	memcpy(dest_real1, src_real1, 6);
	ft_memcpy(dest_test1, src_test1, 6);
	printf("memcpy (dest, src, 6) : %s, real : %s\n", dest_test1, dest_real1);




     
}
