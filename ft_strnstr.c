#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len){

    size_t i = 0;
    size_t needle_len= ft_strlen(needle);


    if ( needle_len == 0 || len ==" ")
        return(*haystack);

    while(haystack[i] == needle[i]){
         *needle++ ;
        }
    

    return (*needle);
    }

    int main(){
    char *haystack = "123456123";
    char *needle = "465";

    printf("return = %s", strnstr(haystack, needle, 5));
    }

