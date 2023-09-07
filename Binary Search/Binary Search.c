#include <stdio.h>

int binary_search(int array[], int item, int lowerbound, int upperbound)
{
    int mid;

    do {
        mid = ((lowerbound + upperbound) / 2);

        if (array[mid] == item)
            return mid;
        else if (array[mid] > item)
            upperbound = mid - 1;
        else
            lowerbound = mid + 1;
    } while (lowerbound <= upperbound);

    return -1;
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, lb = 0, ub = 9, item;

    printf("Enter the item to be found: ");
    scanf("%d", &item);

    if (binary_search(num, item, lb, ub) == -1)
        printf("%d not found in the array.\n\n", item);
    else
        printf("%d found in the array.\n\n", item);

    return 0;
}
