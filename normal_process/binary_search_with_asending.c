
#include<stdio.h>
int main()
{
    int arr[100],i,n,find_value,first,last,mid_position,mid_value,assen=0,check=0;
 
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n array element(ascending order)\n");
    
    
    for(i=0;i<n;++i){
        printf("element arr[%d] = ",i);
        scanf("%d",&arr[i]);
        // ascending order start 
        if(i!=0){
            if(arr[i-1] > arr[i]){
                printf("\nYour array of elements in descending order... try agian assending arry  \n");
                assen=1;
                break;
            } 
        }
        // ascending order end 
      
    }
       
   if(assen==0){
    printf("\nEnter the element to search:");
    scanf("%d",&find_value);
   
 
    first=0;
    last=n-1;
 
    while(first<=last){
        mid_position=(first+last)/2;
        mid_value=arr[mid_position];
        
        if(find_value==mid_value){
            check=1;
            break; 
        }
        else if(mid_value > find_value){
            last=mid_position-1;
        }
        else if(mid_value < find_value){
            first=mid_position+1;
        }
       

        
    } //end while loop
    if(check!=0){
        printf("\nElement found at position %d",mid_position+1);
    }else{
        printf("\nElement not found");
    }
    
    
    
}
 
 
    return 0;
}