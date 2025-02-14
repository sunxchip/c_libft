#include <stdio.h>
#include "libft.h"

int main(){
    char str[] = "ABCDEFGHIJK";
    char *s = ft_strchr(str,'J');

    if (s != NULL){
        printf("%c\n",*s);
        printf("%s\n",s);
    }

    printf("%s\n",ft_strchr(str,'L'));
}