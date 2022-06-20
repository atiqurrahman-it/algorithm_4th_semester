#include<stdio.h>
#include<time.h>
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
    time_t insertiin_start_t,insertiin_end_t;
    double insertion_sort_time;
    insertiin_start_t =clock();
    for (i = 1; i < n; i++)
    {
        temp = arr2[i];
        j = i - 1;
        while(j>=0 && temp <= arr2[j])
        {
            arr2[j+1] = arr2[j];
            j = j-1;
        }
        arr2[j+1] =            temp;
    }

    insertiin_end_t = clock();
    //end bubble sort


    bubble_sort_time = (double)(bubble_end_t - bubble_start_t)/ CLOCKS_PER_SEC;
    printf("\nduration for bubble sort  Total time taken by CPU: %f\n", bubble_sort_time);

    insertion_sort_time = (double)(insertiin_end_t - insertiin_start_t)/ CLOCKS_PER_SEC;
    printf("duration for insertion_sort  Total time taken by CPU: %f\n", insertion_sort_time  );

    double difference_time=bubble_sort_time-insertion_sort_time;
    printf("time difference between  insertion sort & bubble sort  : %f\n", difference_time  );




    // opsonal  code
    printf("\noptional code");
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

    printf("\n");


    return 0;
}


  /*
  for(i=0;i<100;i++){
         int random_number=rand() % 100;
         printf("%d ",random_number);
     }

    */

