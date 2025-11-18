#include<stdio.h>
#define showpa printf("========================\n");
#define STU_NUM 5
#define SUB_NUM 3

int main(){

    double scores[STU_NUM][SUB_NUM];
    char subject_name[SUB_NUM][10] = {"Math", "Science", "English"};
    
    
    showpa
    printf("       STUDENT SCORES\n");
    showpa
    
    for(int x = 0; x < STU_NUM; x++){
        printf("Enter scores for Student NO.%d\n", x + 1);
        for(int y = 0; y < SUB_NUM; y++){
            printf("  %-10s: ", subject_name[y]);
            scanf("%lf", &scores[x][y]);
        }
        printf("\n");
    }
    printf(" AVERAGE STUDENT SCORES\n");
    for(int y = 0; y < SUB_NUM; y++){
        double sum = 0;
    for(int x = 0; x < STU_NUM; x++){
        sum += scores[x][y];   
    }
    printf(" %-10s: %.2lf\n", subject_name[y], sum / STU_NUM);
}
    showpa
    return 0;

}    