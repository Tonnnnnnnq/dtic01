#include <stdio.h>
#define Showline printf("------------------------\n");

int main(){
    int num1, num2;
    int sum;

    Showline;
    printf(" sum NUMBER\n");
    Showline;
    do{
        printf("Enter number 1: "); scanf("%d", &num1);
        printf("Enter number 2: "); scanf("%d", &num2);
        sum = num1 + num2;
        printf("sum of %d and %d is: %d\n", num1, num2, sum);
        Showline;
    }while( sum <= 999 );


    return 0;
}