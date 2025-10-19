#include <stdio.h>
#define Showline printf("------------------------\n");

int main() {
    int number ;
    Showline;
    printf(" Lucky Number Program\n");
    Showline;
    printf(" Enter your Lucky Number; ");
    scanf("%d", &number);
    Showline;
    if(number == 13){
        printf(" Your Lucky Number is %d\n", number);
        printf(" You lucky\n");
    } 
    
    return 0;
}