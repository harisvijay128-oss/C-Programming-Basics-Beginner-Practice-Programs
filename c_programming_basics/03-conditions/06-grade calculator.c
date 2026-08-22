#include <stdio.h>

int main()
{
    int subject, i, fail = 0;
    float marks[10], total = 0.0, avg;

    printf("Student grade calculator");

    printf("\nEnter no. of subjects: ");
    scanf("%d", &subject);

    printf("\nEnter marks for each subject [0 - 100]:\n");
    for (i=0; i < subject; i++) {
        printf("Subject %d mark: ", i+1);
        scanf("%f", &marks[i]);

        if (marks[i] <= 40) {
            fail = fail + 1;
        }
    }

    for (i=0; i < subject; i++) {
        total = total + marks[i];
    }
    printf("\nTotal marks: %.2f out of %d", total, subject * 100);

    avg = total / subject;
    printf("\nAverage marks: %.2f out of 100", avg);

    if (fail > 0) {
        printf("\nIf student failed %d subject(s)", fail);
        printf("\nStudent's grade: F");
    } else {
        printf("\nIf student passed all subjects");
        printf("\nStudent's grade: ");
        if (avg >= 90) {
            printf("A");
        } else if (avg >= 80) {
            printf("B");
        } else if (avg >= 70) {
            printf("C");
        } else if (avg >= 60) {
            printf("D");
        } else { // avg >= 50
            printf("E");
        }
    }

    return 0;
}
