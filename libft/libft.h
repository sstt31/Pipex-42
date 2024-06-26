/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:58:54 by sbadakh           #+#    #+#             */
/*   Updated: 2024/04/06 22:59:50 by sbadakh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <fcntl.h>
# include "limits.h"

# define BUFFER_SIZE 2048

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/*
**		ascii
*/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*
**		mem
*/
void	ft_bzero(void *s, size_t x);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t l);
void	*ft_memccpy(void *dst, const void *src, int c, size_t l);
void	*ft_memmove(void *dst, const void *src, size_t l);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *str, int x, size_t len);

/*
**		math
*/
int		ft_abs(int num);
int		ft_atoi(const char *str);
int		ft_atoi_only_for_num(const char *str);
char	*ft_itoa(int n);
int		ft_find_min(int a, int b);
int		ft_find_max(int a, int b);
int		ft_recursive_power(int nb, int power);
int		ft_iterative_power(int nb, int power);
int		ft_sqrt(int nb);

/*
**		str
*/
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strcpy(char *dst, const char *src);
void	ft_strclr(char *s);
int		get_next_line(int fd, char **line);

/*
**		puts
*/
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*
**		utils
*/
void	ft_error(char *str);
void	ft_prompt(char *str);
void	ft_perror(char *str);

/*
**		list
*/
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstfindmax_val(t_list *lst);
int		ft_lstfindmin_val(t_list *lst);
int		ft_lstfind_ind_of_max_value(t_list *lst);
int		ft_lstfind_ind_of_min_value(t_list *lst);

#endif