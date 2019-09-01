#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int myPow();

void printArray(int *array, int size) {
    printf("["); // [
    for (int i = 0; i < size - 1; i++) { // [1, 2, 3, 4, 
        printf("%i, ", array[i]);
    }
    if (size >= 1) printf("%i", array[size-1]); // [1, 2, 3, 4, 5
    printf("]\n"); // [1, 2, 3, 4, 5]
}

int main(void) {
    int count,result,tod;
    printf("Enter the size of the array:\n");
    scanf("%d", &count);

    // ask for enough memory to fit `count` elements,
    // each having the size of an `int`
    int *array = malloc(count * sizeof(*array));
    if (!array) {
        printf("There was a problem with malloc.");
        exit(EXIT_FAILURE);
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < count; i++) scanf("%d", &array[i]);

    printf ("%d", (int) myPow(2,count));

    free(array);
}

int myPow(int x,int n)
{
    int i;
    int number = 1;

    for (i = 0; i < n; ++i)
        number *= x;

    return(number);
}