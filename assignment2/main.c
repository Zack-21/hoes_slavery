#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANIMAL_NAME 50

int main()
{
    int N, X;

    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    char **domesticAnimals = (char **)malloc(N * sizeof(char *));
    for (int i = 0; i < N; i++) {
        domesticAnimals[i] = (char *)malloc(MAX_ANIMAL_NAME * sizeof(char));
    }

    for (int i = 0; i < N; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);
    }

    printf("\nDomestic animals entered:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domesticAnimals[i]);
    }

    printf("\nEnter the number of wild animals: ");
    scanf("%d", &X);

    char **wildAnimals = (char **)malloc(X * sizeof(char *));
    for (int i = 0; i < X; i++) {
        wildAnimals[i] = (char *)malloc(MAX_ANIMAL_NAME * sizeof(char));
    }

    for (int i = 0; i < X; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);
    }

    printf("\nWild animals entered:\n");
    for (int i = 0; i < X; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    printf("\nAll animals entered both domestic and wild:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domesticAnimals[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    for (int i = 0; i < N; i++) {
        free(domesticAnimals[i]);
    }
    free(domesticAnimals);

    for (int i = 0; i < X; i++) {
        free(wildAnimals[i]);
    }
    free(wildAnimals);

    return 0;
}
