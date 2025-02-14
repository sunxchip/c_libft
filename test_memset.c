#include <stdio.h>
#include "libft.h"

// int main() {
//     int arr[5];
//     for (int i = 0; i < 5; i++) {
//         printf("[%d]", *(arr + i)); //배열에 쓰레기값이 남아있음
//     }
//     printf("\n");

//     ft_memset(arr, 0, sizeof(int) * 5); //크기 5 만큼 0으로 초기화
//     for (int i = 0; i < 5; i++) {
//         printf("[%d]", *(arr + i));
//     }
//     printf("\n");
//     return 0;
// }

//int 형 초기화
int main(){
char str[5], *b;
    int n = 'a';

    for (int i = 0; i < 4; i++) {
        printf("[%c]", *(str + i));
    }

    ft_memset (str, n, sizeof(char) * 5);

    for (int i = 0; i < 4; i++) {
        printf("[%c]", *(str + i));
    }  
}
//char형 초기화