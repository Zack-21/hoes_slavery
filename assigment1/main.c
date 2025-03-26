#include <stdio.h>

#define SUBJECTS 3
#define TEST_TYPES 4

int main() {
    
    float marks[SUBJECTS][TEST_TYPES];
    char *subject_names[SUBJECTS] = {"Physics", "Chemistry", "Math"};

    char *test_names[TEST_TYPES] = {"Assignment", "Course Work", "Mid Term", "End of Term"};

    for (int i = 0; i < SUBJECTS; i++) {
        printf("Enter marks for %s:\n", subject_names[i]);

        for (int j = 0; j < TEST_TYPES; j++) {
            do {
                printf("Enter %s marks (0-100): ", test_names[j]);
                scanf("%f", &marks[i][j]);

                if (marks[i][j] < 0 || marks[i][j] > 100) {
                    printf("Invalid input. Marks must be between 0 and 100.\n");
                }
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
        printf("\n");
    }
    float subject_averages[SUBJECTS];
    for (int i = 0; i < SUBJECTS; i++) {
        float total = 0;
        for (int j = 0; j < TEST_TYPES; j++) {
            total += marks[i][j];
        }
        subject_averages[i] = total / TEST_TYPES;
    }

    float overall_total = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        printf("%s Average: %.2f\n", subject_names[i], subject_averages[i]);
        overall_total += subject_averages[i];
    }

    float overall_average = overall_total / SUBJECTS;
    printf("\nOverall Average: %.2f\n", overall_average);

    return 0;
}
