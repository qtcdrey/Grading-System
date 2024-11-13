#include <stdio.h>

int main() {
    puts("========================");
    puts("  Grading System");
    puts("========================");
    int qz1, qz2, mp1, mp2, fe, te;
    float fg = 0,result = 0; 
    const float grade_point[]={1,1.25,1.5,1.75,2,2.25,2.5,2.75,3,5,0};
    
    printf("Quiz No. 1: ");
    scanf("%d", &qz1);
    printf("Quiz No. 2: ");
    scanf("%d", &qz2);
    printf("Mach. Proj. 1: ");
    scanf("%d", &mp1);
    printf("Mach. Proj. 2: ");
    scanf("%d", &mp2);
    printf("Final Exam: ");
    scanf("%d", &fe);
    printf("Teacher's Eval. : ");
    scanf("%d", &te);

    fg = .50*((qz1+qz2)/2)+.15*((mp1+mp2)/2)+.3*fe+.05*te;
    
    printf("\n");
    puts("========================");
    puts("  Result");
    puts("========================");
    if (fg >= 99 && fg <= 100) {
        puts("Excellent");
        puts("A+");
        result = grade_point[0];
    }
    else if (fg >= 96 && fg <= 98) {
        puts("Very Good");
        puts("A");
        result = grade_point[1];
    }
    else if (fg >= 93 && fg <= 95) {
        puts("Very Good");
        puts("A-");
        result = grade_point[2];
    }
    else if (fg >= 90 && fg <= 92) {
        puts("Good");
        puts("B+");
        result = grade_point[3];
    }
    else if (fg >= 87 && fg <= 89) {
        puts("Good");
        puts("B");
        result = grade_point[4];
    }
    else if (fg >= 84 && fg <= 86) {
        puts("Satisfactory");
        puts("B-");
        result = grade_point[5];
    }
    else if (fg >= 81 && fg <= 83) {
        puts("Satisfactory");
        puts("C+");
        result = grade_point[6];
    }
    else if (fg >= 78 && fg <= 80) {
        puts("Pass");
        puts("C");
        result = grade_point[7];
    }
    else if (fg >= 75 && fg <= 77.74) {
        puts("Pass");
        puts("C-");
        result = grade_point[8];
    }
    else if (fg <= 74.99) {
        puts("Fail");
        puts("F");
        result = grade_point[9];
    }
    else {
        puts("Invalid");
        result = grade_point[10];
    }
    printf("Final Grade: %.2f",fg);
    printf("\nGrade Point: %.2f",result);
}