#ifndef LIBFT_H
#define LIBFT_H



int ft_isalpha(int n);
int ft_isdigit(int n);
int ft_isalnum(int n);
int ft_isascii(int n);
int ft_isprint(int n);
int ft_strlen(const char *s);
void *ft_memset(void *b, int n, size_t len );
void ft_bzero (void *b, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memmove (void *dest, const void *src, size_t num);
size_t ft_strlcpy(char *dst, const char *src, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strchr(const char *s, int n);
char *ft_strrchr(const char *s , int c);
int ft_atoi(const char *str);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2 ,size_t n);
// char *ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif