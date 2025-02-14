#include <stdio.h>
#include "libft.h"


int main(){
    char *s3 = "123456";
    char *s4 = "12345";
    printf("return = %d\n", ft_strncmp(s3, s4, 6));
    printf("return = %d\n", ft_strncmp(s4, s3, 6));

    return 0;
}
