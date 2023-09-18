/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:57:28 by juitz             #+#    #+#             */
/*   Updated: 2023/09/18 11:12:42 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

void	ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nitems, size_t size);
int	ft_isalnum(int input);
int	ft_isascii(int input);
int	ft_isalpha(int input);
int	ft_isdigit(int input);
int	ft_isprint(int input);
int	ft_tolower (int c);
int	ft_toupper (int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memset(void *s, int x, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *s, int c);
char 	*ft_strnstr (const char *big, const char *little, size_t len);
char    *ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
size_t  strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_strncmp(char *s1, char *s2, size_t n);


#endif

