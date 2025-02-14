#include <stdio.h>
#include "libft.h"

int main(){

    char	dst[] = "abcdefghijklmnop";
    char	src[] = "123456";
    ft_strlcpy(dst, src, sizeof(src));
    printf("%s\n", dst);
}

