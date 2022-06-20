#include<stdio.h>
int main()
{
    int arr[100],i,n,x,first,last,mid,check=0;
 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n array element(ascending order)\n");
 
    for(i=1;i<=n;++i){
        printf("element arr[%d]  = ",i);
        scanf("%d",&arr[i]);
        
    }
      
 
    printf("\nEnter the element to search:");
    scanf("%d",&x);
 
    first=1;
    last=n;
 
    while(first<=last)
    {
        mid=(first+last)/2;
        if(x==arr[mid]){
            printf("\nElement found at position %d",mid);
            check=1;
            break; // 
        }
        else if(arr[mid] < x){
            first=mid+1;
        }
        else if(arr[mid] > x){
            last=mid-1;
        }
 
    }
    if(check==0){
        printf("\nElement not found");
    }
 
 
    return 0;
}