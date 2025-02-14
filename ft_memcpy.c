#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void* dest,const void* src, size_t len){
    unsigned char *d =dest;
    const unsigned char *s =src;

    while (len--)
        *d++ = *s++;
    
    return (dest);
    
}



//연습 
// void *ft_memcpy(void* dest,const void* src, size_t len){
//     unsigned char *d = dest;
//     const unsigned char *s =src;

//     while(len --){
//         dest--=src++;
//     }
//     return (void*)d;
// }


// #include <stdio.h>
// #include "libft.h"


// void* ft_memcpy(void* dest, const void* src, size_t num){ //복사 받는 메모리를 가르키는 포인터 // 복사할 메모리를 가르키는 포인터 // 복사할 값의 길이
    
//     char *temp;
//     const char *s;

//     if (!num || dest == src)
//                 return (dest);
//     if (dest == NULL && src == NULL)
//                 return (NULL);

//     temp = dest;
//     s =src;

//     while (num--)
//     {
//         *temp++ = *s++;
//     }
//     return(dest);
// }


// int main() {
//     char str1[] = "Sample string";
//     char str2[40];
//     char str3[40];

//     ft_memcpy(str2, str1, ft_strlen(str1) + 1);
//     ft_memcpy(str3, "copy successful", 16);
//     printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

// return 0;
// }