
#include<stdio.h>
#include<time.h>

// create function for quick sort
void quicksort(int arr2[], int low, int high)
{
    int pivot, start, ends, temp;
    if (low < high)
    {
        pivot = low;
        start = low;
        ends = high;
        while (start < ends)
        {
            while (arr2[start] <= arr2[pivot] )
            {
                start++;
            }
            while (arr2[ends] > arr2[pivot])
            {
                ends--;
            }
            if (start < ends)
            {
                temp = arr2[start];
                arr2[start] = arr2[ends];
                arr2[ends] = temp;
            }
        }
        temp = arr2[ends];
        arr2[ends] = arr2[low];
        arr2[pivot]= temp;

        quicksort(arr2, low, ends - 1);
        quicksort(arr2, ends + 1, high);
    }
}

// end quick sort function
int main()
{
    int arr1[100],arr2[100],i,j,n,temp;

    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\narray elements : ");
    for(i=0; i<n; ++i)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }

    //bubble sort code start
    time_t bubble_start_t, bubble_end_t;
    double bubble_sort_time;

    bubble_start_t = clock();
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;

            }
        }
    }
    bubble_end_t = clock();
    //end bubble sort


    // insertion sort start
    time_t quick_start_t,quick_end_t;
    double quick_sort_time;

    quick_start_t =clock();
    quicksort(arr2, 0, n - 1);
    quick_end_t = clock();
    //end bubble sort


    bubble_sort_time = (double)(bubble_end_t - bubble_start_t)/ CLOCKS_PER_SEC;
    printf("\nduration for bubble sort  Total time taken by CPU: %f\n", bubble_sort_time);

    quick_sort_time = (double)(quick_end_t - quick_start_t)/ CLOCKS_PER_SEC;
    printf("duration for quick sort  Total time taken by CPU: %f\n", quick_sort_time  );

    double difference_time=bubble_sort_time-quick_sort_time;
    printf("time difference between  insertion sort & bubble sort  : %f\n", difference_time  );




    // opsonal  code
    printf("\noptional code");
    printf("\n\nsorted by bubble sort  \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\nsorted by quick sort  \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }

    printf("\n");


    return 0;
}



