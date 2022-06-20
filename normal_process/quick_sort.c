#include <stdio.h>
void quicksort(int arr[], int low, int high)
{
    int pivot, start, ends, temp;
    if (low < high)
    {
        pivot = low;
        start = low;
        ends = high;
        while (start < ends)
        {
            while (arr[start] <= arr[pivot] )
            {
                start++;
            }
            while (arr[ends] > arr[pivot])
            {
                ends--;
            }
            if (start < ends)
            {
                temp = arr[start];
                arr[start] = arr[ends];
                arr[ends] = temp;
            }
        }
        temp = arr[ends];
        arr[ends] = arr[low];
        arr[pivot]= temp;

        quicksort(arr, low, ends - 1);
        quicksort(arr, ends + 1, high);
    }
}


int main()
{
    int arr[50];
    int n, i;

    printf("Enter array length : ");
    scanf("%d", &n);
    printf("Enter array elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);

    printf("After applying quick sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
