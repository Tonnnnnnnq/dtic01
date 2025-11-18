#include <stdio.h>
#define Showline printf("------------------------\n");

int main(){
    int x = 1;

    Showline;
    printf("Show Com Eng\n");
    Showline;

    while(x <= 200){
        printf("Com Eng\n"); //  printf("%d:Com Eng\n", x);

        x = x + 1; // ++x, x++, x += 1
    }


    return 0;
}