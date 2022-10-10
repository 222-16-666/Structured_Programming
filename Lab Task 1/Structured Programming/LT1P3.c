/*The marks obtained by a student in five different subjects*/
#include<stdio.h>
int main (){
    float english, bangla, mathamatics, science, ict, aggregate_marks, percentage_marks;

    printf("Enter the marks of english = ");
    scanf("%f", &english);

    printf("Enter the marks of bangla = ");
    scanf("%f", &bangla);

    printf("Enter the marks of mathamatics = ");
    scanf("%f", &mathamatics);

    printf("Enter the marks of science = ");
    scanf("%f", &science);

    printf("Enter the marks of ict = ");
    scanf("%f", &ict);

    aggregate_marks= english+bangla+mathamatics+science+ict;
    percentage_marks= ((aggregate_marks/5)*100);

    printf("aggregate marks=%.2f\n", aggregate_marks);
    printf("percentage marks=%.2f\n", percentage_marks);


    return 0;
}

