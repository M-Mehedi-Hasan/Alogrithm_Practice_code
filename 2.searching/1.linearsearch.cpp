#include <iostream>
using namespace std;
//this function complexity O(n)-(linear running time).
// "       "    space complexity  O(1)-(constant running time).

//linear_search function maybe - Worst case,Best case,Average case, 
int linear_search(int A[], int n, int x)
{
    int i;
    for(i=0; i<n; i++){
        if (A[i]==x)
        {
            return i;
        }
        
    }


    return -1;
}

int main()
{
    int  value[10]={5,3,2,1,4,9,10,7,6,8};
    int n=10;
    cout<<linear_search(value,n,10)<<endl;
}