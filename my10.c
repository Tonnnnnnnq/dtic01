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
    switch(bus_number){
        case 57:
            printf(" Go to Pinklao\n");
            break;
        case 3:
            printf(" Go to Sanam Luang Ladproao\n");
            break;
        case 71:
            printf(" Go to Hua Lamphong Yaowarat\n");
            break;
        case 56:
            printf(" Go to Bang Lamphu Sqphun Krungthon\n");
            break;
        case 539:
            printf(" Go to Anusawari Chai Samsen\n");
            break;
        default:
            printf(" No information for this bus number\n");
    }
    Showline;
    return 0;
}