#include <stdio.h>

int main()
{
    int student_id;
    printf("Enter Student ID:\n");
    scanf("%d", &student_id);
    while (student_id != -1)
    {
        char grade = 'F';
        int mark;
        printf("Enter Mark:\n");
        scanf("%d", &mark);
        if (mark > 74)
        {
            grade = 'A';
        }
        else if (mark > 64)
        {
            grade = 'B';
        }
        else if (mark > 54) {
            grade = 'C';
        }
        else if (mark > 44) {
            grade = 'D';
        }

        printf("Grade = %c\n", grade);
        printf("Enter Student ID:\n");
        scanf("%d", &student_id);
    }
    return 0;
}