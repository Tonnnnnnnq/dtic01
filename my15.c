#include <stdio.h>
#define Showline printf("------------------------\n");
int main(){
    int i;
    Showline;
    printf("  Devisble by 8\n");
    Showline;

    for(i=1; i<=100; i++){
        if(i % 8 != 0){
            continue;
        }
        printf("%d\n", i);
    }
    
    Showline;

    return 0;
}