/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sheet.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:18:42 by fbosch            #+#    #+#             */
/*   Updated: 2023/05/07 02:02:01 by fbosch           ###   ########.fr       */
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

    printf("\n\n::::::__memcpy__::::::\n");
	char ft_src_1[30] = "123456789";
	char ft_dst_1[30] = "abcdefghij";
	char src_1[30] = "123456789";
	char dst_1[30] = "abcdefghij";
	printf("src content : %s, dest content : %s\n", src_1, dst_1);
	memcpy(dst_1, src_1, 6);
	ft_memcpy(ft_dst_1, ft_src_1, 6);
	printf("memcpy (dest, src, 6) : %s, real : %s\n", ft_dst_1, dst_1);

	printf("\n\n::::::__memmove__::::::\n");
	char ft_dst_2[30] = "abcdefghij";
	char dst_2[30] = "abcdefghij";
	const char *src_2 = "00000000";
	printf("src content : %s, dest content : %s\n", src_2, dst_2);
	memmove(dst_2, src_2 , 5);
	ft_memmove(ft_dst_2, src_2, 5);
	printf("memmove (dest, src, 5) : %s, real : %s\n", ft_dst_2, dst_2);

    printf("\n\n::::::__strlcpy__::::::\n");
    char ft_dst_3[8] = "hey you";
    char ft_src_3[] = "AAAA";
    char dst_3[8] = "hey you";
    char src_3[] = "AAAA";
    printf("src content: %s, dest content: %s\n", src_3, dst_3);
    ft_strlcpy(ft_dst_3, ft_src_3, 8);
    strlcpy(dst_3, src_3, 8);
    printf("strlcpy (dest, src, 8) : %s, real : %s\n", ft_dst_3, dst_3);

    printf("\n\n::::::__strlcat__::::::\n");
    char ft_dst_4[20] = "hey you";
    char ft_src_4[] = "AAAA";
    char dst_4[20] = "hey you";
    char src_4[] = "AAAA";
    int r1;
    int r2;
    printf("src content: %s, dest content: %s\n", src_4, dst_4);
    r1 = ft_strlcat(ft_dst_4, ft_src_4, 20);
    r2 = strlcat(dst_4, src_4, 20);
    printf("strlcpy (dest, src, 20) : %s with return: %i, real : %s with return: %i\n", ft_dst_4, r1, dst_4, r2);

    printf("\n\n::::::__toupper__::::::\n");
    int c1 = 65;
    int c2 = 45;
    int c3 = 100;
    printf("%c to upper is: %c, real: %c\n", c1, ft_toupper(c1), toupper(c1));
    printf("%c to upper is: %c, real: %c\n", c2, ft_toupper(c2), toupper(c2));
    printf("%c to upper is: %c, real: %c\n", c3, ft_toupper(c3), toupper(c3));

    printf("\n\n::::::__tolower__::::::\n");
    c1 = 65;
    c2 = 45;
    c3 = 100;
    printf("%c to lower is: %c, real: %c\n", c1, ft_tolower(c1), tolower(c1));
    printf("%c to lower is: %c, real: %c\n", c2, ft_tolower(c2), tolower(c2));
    printf("%c to lower is: %c, real: %c\n", c3, ft_tolower(c3), tolower(c3));

    printf("\n\n::::::__strchar__::::::\n");
    char *s_char = "Hola que tal";
    char c = 'a';
    char *ft_found;
    char *found;
    printf("str content: %s, to find content: %c\n", s_char, c);
    ft_found = ft_strchr(s_char, c);
    found = strchr(s_char, c);
    printf("Strchr (s_char, 'a'): %s, real: %s\n", ft_found, found);

    printf("\n\n::::::__strrchar__::::::\n");
    char *s_char2 = "Hola que tal";
    c = 'a';
    char *ft_found2;
    char *found2;
    printf("str content: %s, to find content: %c\n", s_char2, c);
    ft_found2 = ft_strrchr(s_char2, c);
    found2 = strrchr(s_char2, c);
    printf("Strrchr (s_char2, 'a'): %s, real: %s\n", ft_found2, found2);

    printf("\n\n::::::__strncmp__::::::\n");
    char *cmp1 = "test\200";
    char *cmp2 = "test\0";
    int n = 6;
    printf("strncmp (cmp1, cmp2, n): %i, real: %i\n", ft_strncmp(cmp1, cmp2, n), strncmp(cmp1, cmp2, n));

    printf("\n\n::::::__memchr__::::::\n");
    char *s_mem = "Hey";
    c = 'y';
    int x = 0;
    char *ft_found3;
    char *found3;
    printf("str content: %s, to find content: %c\n", s_mem, c);
    ft_found3 = ft_memchr(s_mem, c, 3);
    found3 = memchr(s_mem, c, 3);
    printf("Strchr (s_mem, 'a'): %s, real: %s\n", ft_found3, found3);

    printf("\n\n::::::__memcmp__::::::\n");
    char *cmp4 = "test";
    char *cmp5 = "tes";
    n = 5;
    printf("memcmp (cmp4, cmp5, n): %i, real: %i\n", ft_memcmp(cmp4, cmp5, n), memcmp(cmp4, cmp5, n));

    printf("\n\n::::::__strnstr__::::::\n");
    char *str7 = "blap tlap marual talp";
    char *needle = "al";
    n = 50;
    printf("strnstr (str7, needle, n): %s, real: %s\n", ft_strnstr(str7, needle, n), strnstr(str7, needle, n));

    printf("\n\n::::::__atoi__::::::\n");
    char *str8 = "  \v\f\r \n-00000000000000000001t278";
    printf("atoi(str8): %i, real: %i\n", ft_atoi(str8), atoi(str8));



     
}
