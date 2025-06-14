/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JAL_string.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg.>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 21:05:08 by joao-alm          #+#    #+#             */
/*   Updated: 2025/04/14 16:19:08 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JAL_STRING_H
# define JAL_STRING_H

# include <stdlib.h>

char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *str, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little,
			size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_intlen(int i);
size_t	ft_strarrcount(char **strarr);
char	**ft_strarrdup(char **src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin_free(char *s1, char *s2, const int to_free);
int		ft_isempty(char *str);

#endif //JAL_STRING_H
