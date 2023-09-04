#include <stdio.h>

int linear_search(int array[], int item, int array_size)
{
    for (int i = 0; i < array_size; i++){
        if (array[i] == item)
            return i;
    }

    return -1;
}

int main()
{
    int array[] = {2, -3, 6, 11, -98, 2435, 4}, item;
    printf("Enter the item to be found: ");
    scanf("%d", &item);

    if (linear_search(array, item, 7) == -1)
        printf("%d could not be found in the array.\n\n", item);
    else
        printf("%d  found in the array.\n\n", item);

    return 0;

}
