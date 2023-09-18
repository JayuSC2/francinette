/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:17:20 by juitz             #+#    #+#             */
/*   Updated: 2023/09/12 17:35:18 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

size_t strlcpy(char *dest, const char *src, size_t size)
{
    unsigned int n;

    n = 0;
    while (*(src + n) && (n < size - 1))
        *dest++ = *(src + n++);
    *dest = '\0';
    while (*(src + n))
    n++;
        
    return (n);
}

int main(void)
{
    char src[] = "Hello how is it going";
    char dest[] = "How are you?";

    printf("%zu", strlcpy(dest, src, 10));
}