#include<stdio.h>
#include<algorithm>
#include<ctime>
using namespace std;
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
    time_t start_time, end_time;
    double bubble_sort_time;

    start_time =clock();
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                swap(arr1[j],arr1[j+1]);
            }
        }
    }
    end_time = clock();
    //end bubble sort


    // insertion sort start
    time_t start_time2,end_time2;
    double insertion_sort_time;
    start_time2 =clock();
    for (i = 1; i < n; i++)
    {
        temp = arr2[i];
        j = i - 1;
        while(j>=0 && temp <= arr2[j])
        {
            arr2[j+1] = arr2[j];
            j--;
        }
        arr2[j+1] = temp;
    }

    end_time2 = clock();
    //end bubble sort


    bubble_sort_time = (double)(end_time - start_time)/ CLOCKS_PER_SEC;
    printf("\nduration for bubble sort  Total time taken by CPU: %lf\n", bubble_sort_time);

    insertion_sort_time = (double)(end_time2 - start_time2)/ CLOCKS_PER_SEC;
    printf("duration for insertion sort  Total time taken by CPU: %lf\n", insertion_sort_time  );

    double difference_time=(double)(bubble_sort_time-insertion_sort_time);
    printf("time difference between  insertion sort & bubble sort  : %lf\n", difference_time  );




    // optional  code
    printf("\n optional code");
    printf("\n\nsorted by bubble sort  \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\nsorted by insertion sort  \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }






    return 0;
}
