/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-jes <cade-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:21:22 by cade-jes          #+#    #+#             */
/*   Updated: 2025/06/11 09:47:38 by cade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

// fonction de base

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t siz);
size_t		ft_strlcat(char *dst, const char *src, size_t siz);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
long long	ft_atoi(const char *src);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);

// fonction supplémentaire

char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

// liste chainée

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// printf

typedef struct p_list
{
	int	*back;
}				t_lst;

int			ft_printf(const char *s, ...);
void		hub(const char *s, va_list args, t_lst *list);
void		ftputchar(const char *s, va_list args, t_lst *list);
void		ftputstr(const char *s, va_list args, t_lst *list);
void		ftputnbr(const char *s, va_list args, t_lst *list);
void		ftputnbr_u(const char *s, va_list args, t_lst *list);
void		ftprinthexa(const char *s, va_list args, t_lst *list);
void		ftputadress(const char *s, va_list args, t_lst *list);

// get_next_line

char		*get_next_line(int fd);
char		*calloc_char(size_t size);
void		ft_strchr_gnl(char **buf, char *reading);
char		*ft_strjoin_gnl(char *s1, char const *s2);
void		ft_strcpy(char *dst, const char *src);

#endif