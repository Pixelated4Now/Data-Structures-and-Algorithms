#include <stdio.h>

void bubble_sort(int array[], int upperbound)
{
    int swap, temp, index;
    int boundary = upperbound - 1;

    do {
        swap = 0;     //swap is used as a flag.

        for (index = 0; index <= boundary; index++) {
            if (array[index] > array[index+1]) {
                temp = array[index];
                array[index] = array[index+1];
                array[index+1] = temp;
                swap = 1;
            }
        }

        boundary--;

    } while (swap);
}

int main()
{
    int array[] = {5, 1, 4, 2, 8}, upperbound = 4;

    printf("\nBefore bubble sort:");
    for (int i = 0; i < 5; i++)
        printf("\t%d", array[i]);

    printf("\n\n");

    bubble_sort(array, upperbound);   //Sorts the array into ascending order.

    printf("After bubble sort:");
    for(int i = 0; i < 5; i++)
        printf("\t%d", array[i]);

    printf("\n\n");

    return 0;
}
