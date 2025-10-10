//ป้อนชื่อ-สกุล ชื่อเล่น อายุ เงินเดิอน แล้วแสดงผลออกทางหน้าจอ
#include <stdio.h>
#define Showline printf("------------------------\n");
int main() {
    char fullname[50];  //%[^\n]
    char nickname[20];  //%s 
    int age;            //%d
    float salary;       //%f
    
    Showline;
    printf("Your information:\n");
    Showline;

    printf("Enter your fullname: ");
    scanf("%[^\n]", fullname);
    Showline;
    printf("Enter your nickname: ");
    scanf("%s", nickname);
    Showline;
    printf("Enter your age: ");
    scanf("%d", &age);
    Showline;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    Showline;
    printf("Full Name: %s\n", fullname);
    printf("Nickname: %s\n", nickname);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    Showline;


    return 0;
}