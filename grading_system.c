#include <stdio.h>

int main() {
    int quiz[2], mach_proj[2], final_exam, teacher_evaluation;
    float final_grade = 0, result = 0; 
    const float grade_point[] = { 1, 1.25, 1.5, 1.75, 2, 2.25, 2.5, 2.75, 3, 5, 0 };
    for (int i=1; i<=2; i++) {
        printf("Quiz No. %i     => ",i);
        scanf("%i", &quiz[i]);
	}
	for (int i=1; i<=2; i++) {
        printf("Mach. Proj. %i  => ",i);
        scanf("%i", &mach_proj[i]);
	}
    printf("Final Exam     => ");
    scanf("%d", &final_exam);
    printf("Teacher's Eval.=> ");
    scanf("%d", &teacher_evaluation);
    final_grade =   .50*((quiz[1]+quiz[2])/2)+
                    .15*((mach_proj[1]+mach_proj[2])/2)+
                    .3*final_exam+
                    .05*teacher_evaluation;
    puts("\nResult:");
    if (final_grade >= 99 && final_grade <= 100) {
        puts("Excellent");
        puts("A+");
        result = grade_point[0];
    } else if (final_grade >= 96 && final_grade <= 98) {
        puts("Very Good");
        puts("A");
        result = grade_point[1];
    } else if (final_grade >= 93 && final_grade <= 95) {
        puts("Very Good");
        puts("A-");
        result = grade_point[2];
    } else if (final_grade >= 90 && final_grade <= 92) {
        puts("Good");
        puts("B+");
        result = grade_point[3];
    } else if (final_grade >= 87 && final_grade <= 89) {
        puts("Good");
        puts("B");
        result = grade_point[4];
    } else if (final_grade >= 84 && final_grade <= 86) {
        puts("Satisfactory");
        puts("B-");
        result = grade_point[5];
    } else if (final_grade >= 81 && final_grade <= 83) {
        puts("Satisfactory");
        puts("C+");
        result = grade_point[6];
    } else if (final_grade >= 78 && final_grade <= 80) {
        puts("Pass");
        puts("C");
        result = grade_point[7];
    } else if (final_grade >= 75 && final_grade <= 77.74) {
        puts("Pass");
        puts("C-");
        result = grade_point[8];
    } else if (final_grade <= 74.99) {
        puts("Fail");
        puts("F");
        result = grade_point[9];
    } else {
        puts("Invalid");
        result = grade_point[10];
    }
    printf("Final Grade: %.2f", final_grade);
    printf("\nGrade Point: %.2f", result);
    puts("\n");
    return 0;
}