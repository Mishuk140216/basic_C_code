#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float avgScore[10], score = 0, s;
    char grade[10];

    for (int i=0; i<=9; i++) {
        printf("enter the score of student %d: \n", i+1);
        for (int j=0; j <= 4; j++) {
            printf("\ttest %d: ", j+1);
            scanf("%f", &s);
            score = score + s;
            }
        avgScore[i] = score / 5;
        score = 0;
        if (avgScore[i] >= 90) grade[i] = 'A';
        else if (avgScore[i] >= 80) grade[i] = 'B';
        else if (avgScore[i] >= 70) grade[i] = 'C';
        else if (avgScore[i] >= 60) grade[i] = 'D';
        else if (avgScore[i] < 60) grade[i] = 'F';

        }

    printf("\n\tno.\tscore\tgrade\n");
    for (int k=0; k <= 9; k++) printf("\n%2d\t%3.2f\t%c\n", k+1, avgScore[k], grade[k]);

    getch();
    return 0;
}
/**2. There are 10 students in a class. Each student has taken ve tests, and each test
is worth 100 points. We want to design an algorithm to calculate the grade for
each student, as well as the class average. The grade is assigned as follows: If the
average test score is greater than or equal to 90, the grade is A; if the average
test score is greater than or equal to 80 and less than 90, the grade is B; if the
average test score is greater than or equal to 70 and less than 80, the grade is C;
if the average test score is greater than or equal to 60 and less than 70, the grade
is D; otherwise, the grade is F.*/
