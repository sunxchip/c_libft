#include <stdio.h>
#include "libft.h"

int main(){
    int i= 127;
        printf("isascii: A[%d]\n", ft_isascii('A'));
        printf("isascii: 8[%d]\n", ft_isascii('8'));
        printf("isascii: i[%d]\n", ft_isascii(i+1));
}