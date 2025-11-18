#include <stdio.h>
#define Showline printf("------------------------\n");
int main(){
    int number;
    Showline;
    printf(" Even or Odd NUMBER\n");
    Showline;
    
    while (1){ //infinite loop
        printf(" Enter a number:");
        scanf("%d", &number);
        if (number <= 0){
            Showline;
            break; 
        }
        if(number % 2 == 0){
            printf("%d is Even number\n", number);
        }else{
            printf("%d is Odd number\n", number);
        }
            
    }
    Showline;


    return 0;
}