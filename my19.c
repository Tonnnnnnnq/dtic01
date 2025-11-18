//have parameter has return
#include <stdio.h> //printf()
#include <string.h>//strcat()

char* showWelcome(char* fname, char* lname);
int sumnumber(int n1, int n2){
    printf("n1 is %d\n", n1);
    printf("n2 is %d\n", n2);
    return n1 + n2;
}

int main(){
    printf("Sum of number is %d\n", sumnumber(10, 20));
    printf("Welcome for %s\n", showWelcome("Ton ", "Ji"));
    return 0;
}

char* showWelcome(char* fname, char* lname) {
    static char fullname[100];
    strcpy(fullname, fname);
    strcat(fullname, lname);
    printf("%s\n", fullname);
    return fullname;
}

/*
//have parameters - has return
#include "stdio.h"   //printf()
#include "string.h"  //strcat()
#include "stdlib.h"  //malloc()
 
char* showWelcome(char* fname, char* lname);
 
int sumNumber(int n1, int n2){
    printf("N1 is %d\n", n1);
    printf("N2 is %d\n", n2);
    return n1 + n2;
}
 
int main(){
    printf("Sum of number is %d\n", sumNumber(10, 20));
    printf("Welcome for %s\n", showWelcome("Ninnin", "Wowwow"));    
 
    return 0;
}
 
//เชื่อมข้อความ
//molloc จองพื้นที่, strlen นับจำนวนตัวอักษร, strcpy คัดลอกข้อความ, strcat เชื่อมข้อความ
char* showWelcome(char* fname, char* lname){  
    //จองพื้นที่ที่จะเก็บข้อมูล
    char* result = (char*)malloc((strlen(fname) + strlen(lname) + 2)*sizeof(char));
 
    //เชื่อมข้อความ
    strcpy(result, fname);
    strcat(result, " ");
    strcat(result, lname);
 
    return result;
}
*/
