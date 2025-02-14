#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t len)
{
    size_t src_len=0;
    size_t i=0;

    while (src[src_len])
        src_len++;
        
    if(len == 0)
        return (src_len);

    while (i < src_len && i < len - 1)
    {
        dst[i] = src[i];
        i++;
    }
    
    if (len > 0)
        dst[i] = '\0';
    return (src_len);
}

