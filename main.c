#include <stdio.h>
#define SIZE 100

void filterNumbers(int natural[], int size, int digit);
void saveFilteredNumbersToFile(int natural[], int size, int digit);

int main(void) {
    int natural[SIZE], i, digit;
    
    printf("Enter a digit to filter numbers containing it or divisible by it: ");
    scanf("%d", &digit);
    
    printf("Original array: ");
    for (i = 0; i < SIZE; i++) {
        natural[i] = i + 1;
        printf("%d ", natural[i]);
    }
    
    printf("\n\nNumbers containing digit %d or divisible by %d:\n", digit, digit);
    filterNumbers(natural, SIZE, digit);
    saveFilteredNumbersToFile(natural, SIZE, digit);
    
    printf("Filtered numbers saved to 'filtered_numbers.txt'.\n");
    return 0;
}

void filterNumbers(int natural[], int size, int digit) {
    for (int i = 0; i < size; i++) {
        if (natural[i] % digit == 0 || natural[i] % 10 == digit || natural[i] / 10 == digit) {
            printf("%d ", natural[i]);
        }
    }
    printf("\n");
}

void saveFilteredNumbersToFile(int natural[], int size, int digit) {
    FILE *file = fopen("filtered_numbers.txt", "w");
    if (!file) {
        printf("Error creating file!\n");
        return;
    }
    
    fprintf(file, "Numbers containing digit %d or divisible by %d:\n", digit, digit);
    for (int i = 0; i < size; i++) {
        if (natural[i] % digit == 0 || natural[i] % 10 == digit || natural[i] / 10 == digit) {
            fprintf(file, "%d ", natural[i]);
        }
    }
    fprintf(file, "\n");
    fclose(file);
}
