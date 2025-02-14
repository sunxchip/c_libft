#include <stdio.h>
#include "libft.h"

int main(){

    printf("isalnum: A[%d]\n", ft_isalnum('A'));
    printf("isalnum: b[%d]\n", ft_isalnum('b'));
    printf("isalnum: 3[%d]\n", ft_isalnum('3'));
    printf("isalnum: ?[%d]\n", ft_isalnum('?'));
}