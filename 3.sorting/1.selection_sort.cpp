#include <iostream>
using  namespace std;

//selection sort algorithm complexity O(n^2)

void selection_sort(int A[], int n)
{
        int i,j,min,temp;
        for(i=0; i<n-1; i++){
            min=i;

            for(j=i+1; j<n; j++){
                if (A[j]<A[min])
                {
                    min=j;
                }
                
            }
            if (min!=i)
            {
                temp=A[i];
                A[i]=A[min];
                A[min]=temp;
            }
            
        }
}



int main()
{
        int value[10]={5,6,2,3,7,8,1,10,9,4};
        int n=10;
         selection_sort(value,n);
        int i;
        for(i=0; i<n; i++){
            cout<<value[i];
        }
        cout<<endl;
}