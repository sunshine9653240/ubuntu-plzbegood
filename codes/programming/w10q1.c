#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char studentID[20];
    int programming, programmingLab, calculus;
    int score;
} Student;

void Scanf(Student *stu){
    scanf("%s",stu->studentID);
    scanf("%d",&(stu->programming));
    scanf("%d",&(stu->programmingLab));
    scanf("%d",&(stu->calculus));
    stu->score = stu->programming + stu->programmingLab + stu->calculus;
}

int cmpfunc (const void* a, const void * b)
{
    return ( ((Student*)b)->score - ((Student*)a)->score );
}


int main(void){
    int n = 0;
    scanf("%d",&n);
    Student student[n];
    int cnt = 0;
    
    while(n--){
        Scanf(&student[cnt]);
        cnt++;
    }
    
    qsort(student,cnt,sizeof(Student),cmpfunc);
    for(int i = 0 ; i<3; i++){
        printf("%s\n",student[i].studentID);
    }
}