#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int n){
    
    size_t i = 0;
    while (s[i] != (char)n) {
        if (s[i] == '\0')
            return 0;
        s++;
    }
    return (char *)s;
}