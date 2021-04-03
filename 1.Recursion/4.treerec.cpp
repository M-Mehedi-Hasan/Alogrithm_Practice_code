#include <iostream>
using namespace std;

// tree recursion
void treerec(int n)
{
    if (n>0){
        cout<<n;
        treerec(n-1);
        treerec(n-1);
    }
    
}
 
int main()
{
    
    int n=3;
    treerec(n);
}