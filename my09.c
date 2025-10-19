#include <stdio.h> 
#define Showline printf("------------------------\n");


int main(){
    int bus_number; //%d
    Showline;
    printf(" Bus Number information\n");
    Showline;
    printf(" Enter bus number: ");
    scanf("%d", &bus_number);
    Showline;
    if(bus_number == 57 ){
        printf(" Go to Pinklao\n");
    } else if(bus_number == 3){
        printf(" Go to Sanam Luang Ladproao\n");
    } else if(bus_number == 71){
        printf(" Go to Hua Lamphong Yaowarat\n");
    } else if(bus_number == 56){
        printf(" Go to Bang Lamphu Sqphun Krungthon\n");
    } else if(bus_number == 539){
        printf(" Go to Anusawari Chai Samsen\n");
    } else {
        printf(" No information for this bus number\n");
    }
    Showline;
    return 0;
}