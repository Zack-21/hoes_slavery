#include <stdio.h>

#define SUBJECTS 3
#define TEST_TYPES 4

int main() {
    // 2D array to store marks for each subject and test type
    float marks[SUBJECTS][TEST_TYPES];

    // Subject names for reference
    char *subject_names[SUBJECTS] = {"Physics", "Chemistry", "Math"};

    // Test type names for reference
    char *test_names[TEST_TYPES] = {"Assignment", "Course Work", "Mid Term", "End of Term"};

    // First loop: Input marks for each subject
    for (int i = 0; i < SUBJECTS; i++) {
        printf("Enter marks for %s:\n", subject_names[i]);

        // Second loop: Input marks for each test type
        for (int j = 0; j < TEST_TYPES; j++) {
            do {
                printf("Enter %s marks (0-100): ", test_names[j]);
                scanf("%f", &marks[i][j]);

                // Validate input
                if (marks[i][j] < 0 || marks[i][j] > 100) {
                    printf("Invalid input. Marks must be between 0 and 100.\n");
                }
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
        printf("\n");
    }

    // Third loop: Calculate subject-wise averages
    float subject_averages[SUBJECTS];
    for (int i = 0; i < SUBJECTS; i++) {
        float total = 0;
        for (int j = 0; j < TEST_TYPES; j++) {
            total += marks[i][j];
        }
        subject_averages[i] = total / TEST_TYPES;
    }

    // Fourth loop: Print subject-wise and overall averages
    float overall_total = 0;
    for (int i = 0; i < SUBJECTS; i++) {
        printf("%s Average: %.2f\n", subject_names[i], subject_averages[i]);
        overall_total += subject_averages[i];
    }

    // Calculate and print overall average
    float overall_average = overall_total / SUBJECTS;
    printf("\nOverall Average: %.2f\n", overall_average);

    return 0;
}
