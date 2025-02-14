#include <stdio.h>
#include  "libft.h"

int ft_isalnum(int n){
    return((n >= 48 && n<= 57)||( n >='A' && n <='Z')||( n >= 'a'&& n <= 'z' ) );
}

