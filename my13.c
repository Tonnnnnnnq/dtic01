#include <stdio.h>
#define Showline printf("------------------------\n");

int main(){
    int number, result;
    int x;
    Showline;
    printf(" Multiplication NUMBER\n");
    Showline;
    printf(" Enter a number: ");
    scanf("%d", &number);
    Showline;
    for(x = 1; x <= 12; x = x + 1){ //x+1, x++, ++x, x+=1
        result = number * x;
        printf("%d x %d = %d\n", number, x, result);
    }
    Showline;

    return 0;
}