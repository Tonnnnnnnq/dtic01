// single comment

/*
    " " double quote , ' ' single quote , # hash , / slash , \ backslash
    : colon , ; semicolon , () round bracket , [] square bracket
    {} curly bracket , < > angle bracket , | Pipe , & ampersand
    ` backtick (ALT+9+6) ^ caret
*/


#include <stdio.h> // "stdio.h" 

int main() {
    //แสดงเฉพาะที่อยู่ใน "" แรกเท่านั้น โดยเเขียนอย่างไงแสดงอย่างนั้น *** ยกเว้นรหัสแบ็คสแลช กับ format spec/format code
    //แต่หากมีอะไรต่อจาก "" แรก จะต้องนำมาใช้แสดงผลที่ "" แรกเสมอ โดยใช้ format spec/format code
        printf("Hello....\n");
        printf("AAA %d BBB %s %d^_^\n", 555, "wow wow wow", 100+200);

        printf("Hi\n\n\nHey\tHoo\t\t\tWow");

    return 0;
}