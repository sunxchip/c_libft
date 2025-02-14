#include <stdio.h>
#include "libft.h"
int ft_isalpha(int n) {
    if (n >= 'A' && n <= 'Z')
        return 1;
    else if (n >= 'a' && n <= 'z')
        return 2;
    return 0; 
}
