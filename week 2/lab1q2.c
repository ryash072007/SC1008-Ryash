#include <stdio.h>

int main() {
    int num_lines;
    printf("Enter number of lines:\n");
    scanf("%d", &num_lines);

    for (int i = 1; i <= num_lines; i++) {
        printf("Enter line %d (end with -1):\n", i);
        
        int num = 0;
        float average = 0.0;
        int count = 0;
        scanf("%d", &num);
        while (num != -1) {
            average += num;
            count += 1;
            scanf("%d", &num);
        }
        average /= count;
        printf("Average = %.2f\n", average);
    }

    return 0;
}