#include <iostream>
using namespace std;



void insetion_sort(int A[], int n)
{
    int i,j,item;

    for(i=1; i<n; i++){
        item=A[i];
        j=i-1;
        while (j>=0 &&A[j]>item)
        {
             A[j+1]=A[j];
             j=j-1;
        }
        A[j+1]=item;
        
    }
}


int main()
{
    int value[5]={5,3,1,2,4};
    int n=5;
    insetion_sort(value,n);
    int i;
    for(i=0; i<n; i++){
        cout<<value[i];
    }
    cout<<endl;

}