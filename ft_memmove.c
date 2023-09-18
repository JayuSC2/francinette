/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:54:40 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 10:36:27 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    size_t i;

    i = 0;
    if (cdest > csrc)
    {
        while (len-- > 0)
            cdest[len] = csrc[len];
    }
    while (i < len)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return(dest);
}
int main(void)
{
    size_t    len;
    char csrc[] = "Aiiiiiiight";
    char cdest[] = "We got this";

    len = 30;
    ft_memmove (cdest, csrc, len);
    printf ("%s", cdest);
    return (0);
}
