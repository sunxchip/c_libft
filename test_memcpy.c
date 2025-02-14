#include <stdio.h>
#include "libft.h"

int main(){
    const char* src ="123456789";
    char dest[] = "abcdefghijk";

    ft_memcpy(dest,src, sizeof(char) *5);
    printf("%s\n",src);
    printf("%s\n",dest);

    return 0;
}