#include <iostream>
using namespace std;
//Binary Search is applied on the sorted array or list of large size. It's time complexity of O(log n) makes it very fast as compared to other sorting algorithms. The only limitation is that the array or list of elements must be sorted for the binary search algorithm to work on it.

int binary_Search(int A[], int n, int x)
{
        int left, right,mid;
        left=0;
        right=n-1;
        while (left<=right)
        {
            mid=(left+right)/2;
            if (A[mid]==x)
            {
                return mid;
            }
            if (A[mid]<x)
            {
               left=mid+1;
            }else{
                right=mid-1;
            }
        }

        return -1;
        
}


int main(){
    int value[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,x=4;
    cout<<binary_Search(value,n,x)<<endl;
}