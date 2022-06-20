#include <iostream>
using namespace std;

int arr[100],Max,Min;

int maxmin(int left,int right)
{
    int max1,min1,mid;
    if(left==right){       //single(1) number
        Max=Min=arr[left];  //arr[left or right]
    }
    else if(left==right-1){   // dobule(2) number
            Max=max(arr[left], arr[right]);
            Min=min(arr[left], arr[right]);

    }
    else{
        mid=(left+right)/2;
        maxmin(left,mid);
        max1 = Max; min1 = Min;
        maxmin(mid+1,right);

        Max=max(Max,max1);
        Min=min(Min,min1);
    }
}//end maxmin function


int main(){
    int n,i;

    //user input section start
    printf("Enter the total number of numbers : ");
    scanf("%d",&n);
    printf("Enter the numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //user input section end
    maxmin(0,n-1);
    printf("\n minimum number is : %d \n ",Min);
    printf("\n maximum number is : %d \n",Max);

return 0;
}
