#include <stdio.h>
#include <string.h>

int main(){
    char dest[30] ="123";
    char *src = "456789";

    size_t ret =ft_strlcat(dest,src,7);
    printf("dest= %s\nreturn=%zu",dest,ret);
}