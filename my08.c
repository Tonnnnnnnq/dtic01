#include <stdio.h> // printf(), scanf()
#define Showline printf("+++++++++++++++++++++++++++++++\n");


int main() {
    char pro_id[5], pro_name[50]; // string %s, char %c
    float pro_price, pro_sale; // float %f, double %lf

    Showline;
    printf(" Calculate Product Sale\n");
    Showline;
    printf(" Enter Product ID: ");
    scanf("%s", pro_id);
    Showline;
    printf(" Enter Product Name: ");
    scanf("%s", pro_name);
    Showline;
    printf(" Enter Product Price: ");
    scanf("%f", &pro_price);
    Showline;
    if(pro_price < 1000){
        pro_sale = pro_price - (pro_price * 3/100);
    } else {
         pro_sale = pro_price - (pro_price * 5/100);
    }
    printf("Product Sale : %.2f\n", pro_sale);
    Showline;

    return 0;
} 