#include<stdio.h>
int main()
{
    int arr[100],i,n,x,mid,found;

    int binarySearch(int arr[],int low,int high,int x){
        if(low<=high){
            if(low==high){
                if(x==arr[high]){
                    return low;
                }
                else{
                    return 0;
                }
            }
            else{
                mid=(low+high)/2;
                if(x==arr[mid]){
                    return mid;
                }
                else if(x< arr[mid]){
                    high=mid-1;
                    return binarySearch(arr,low,high,x);
                }
                else{
                    low=mid+1;
                    return binarySearch(arr,low,high,x);
                    }
                }
        }//first if end
}


    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("\narray element(ascending order)\n\n");

    for(i=1;i<=n;++i){
        printf("element arr[%d]  = ",i);
        scanf("%d",&arr[i]);

    }

    printf("\nEnter the element to search : ");
    scanf("%d",&x);

    found=binarySearch(arr,1,n,x);

    if(found >0){
        printf("\nElement found at index : %d  \n",found);
        }
    else{
        printf("\nElement not found in the array \n");
    }


    return 0;
}
