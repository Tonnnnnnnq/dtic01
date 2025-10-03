//perprocessor directives
#include <stdio.h> 
// คือ ประกาศ Libreary

#include "math.h"
// คือ ประกาศ ค่าคงที่ คือ การสร้างตัวแทนของอะไรสักอย่างนึงเพื่อเอาไปใช้งานในโปรแกรม

#define ShowPa printf("+++++++++++++++++++\n")
#define SMILE "^_^ 5555"

//global (ใช้ที่ไหนก็ได้) declaration (ประกาศ/สร้าง)
int number = 999;
void ShowHey();

//user-defined function
void ShowHi(){
    printf("Hi.....\n");
}

//main function
int main() { 
    ShowPa;
    printf("DTI-SAU\n");
    printf("%1f\n", pow(2,20));
    ShowPa;
    ShowHi();
    ShowHey();
    return 0;
}

//user-defined function
void ShowHey(){
    printf("Hey.....\n");
}
