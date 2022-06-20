#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

//wt={10,20,30} ..wight
// avlue ={5,5,6} profile
//n object
//w Total capaciyue
int knapSack(int W, int wt[], int val[], int n)
{
    // Base Case
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
}

int main(){
}
