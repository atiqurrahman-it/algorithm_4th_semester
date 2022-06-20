
int arr[100],max,min,left,right;


int maxmin(left,right)
{
    int max1,min1,mid;
    if(left==right){
        min=max=arr[left];
    else{
        mid=(left+right)/2;
        maxmin(left,mid);
        max1 = max; min1 = min;
        maxmin(mid+1,right);

        if(max < max1){
            max=max1;
        }
        if(min > min1){
            min=min1;
            }

    }
}//end maxmin function


int main(){
    int n,i;

    //user input section start
    printf("Enter Array length : ");
    scanf("%d",&n);
    printf("Enter Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //user input section end
    maxmin(0,n-1);
    printf("\n minimum number is : %d \n ",min);
    printf("\n maximum number is : %d \n",max);

return 0;
}
