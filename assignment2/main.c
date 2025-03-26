#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ANIMAL_NAME 50

int main()
{
    // Accept a group of domestic and wild animals
    int N, X;

    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    // Dynamically allocate memory for domestic animals
    char **domesticAnimals = (char **)malloc(N * sizeof(char *));
    for (int i = 0; i < N; i++) {
        domesticAnimals[i] = (char *)malloc(MAX_ANIMAL_NAME * sizeof(char));
    }

    // Input domestic animals
    for (int i = 0; i < N; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);
    }

    // Print domestic animals
    printf("\nDomestic animals entered:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domesticAnimals[i]);
    }

    // Input wild animals
    printf("\nEnter the number of wild animals: ");
    scanf("%d", &X);

    // Dynamically allocate memory for wild animals
    char **wildAnimals = (char **)malloc(X * sizeof(char *));
    for (int i = 0; i < X; i++) {
        wildAnimals[i] = (char *)malloc(MAX_ANIMAL_NAME * sizeof(char));
    }

    // Input wild animals
    for (int i = 0; i < X; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);
    }

    // Print wild animals
    printf("\nWild animals entered:\n");
    for (int i = 0; i < X; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    // Print all animals
    printf("\nAll animals entered (Domestic + Wild):\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domesticAnimals[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    // Free allocated memory
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
