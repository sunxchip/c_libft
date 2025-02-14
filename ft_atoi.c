#include <stdio.h>
#include "libft.h"

int ft_atoi(const char *str){
    long long int minus = 1;
    long long int result =0;

    while ((9 <= *str && *str <= 13) || *str ==' ')
        str++;

        if ( *str == '+'|| *str =='-'){
            if (*str == '-')
                minus = minus * -1;
            str++;
        }
        while ( 48 <= *str && 57>= *str)
        {
            result *= 10;
            result += (*str - 48) ;
            str++;
        }

    return(result * minus);
}

