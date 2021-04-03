#include <iostream>
using namespace std;
//bubble sort time complexity  O(n^2).
void bubble_sort(int A[], int n)
{
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            if (A[j]>A[j+1])
            {
               temp=A[j];
               A[j]=A[j+1];
               A[j+1]=temp;
            }
            
        }
    }
}

int main()
{
        int value[5]={5,3,1,2,4};
        int n=5;
        bubble_sort(value,n);
        int i;
        for(i=0; i<n; i++){
            cout<<value[i];
        }
}