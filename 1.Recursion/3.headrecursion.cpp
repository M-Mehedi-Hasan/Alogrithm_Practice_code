#include <iostream>
using namespace std;

void Head_rec(int n){
    if (n>0)
    {
        Head_rec(n-1);
        cout<<n;
    }
    
}
//this progam work this loop

void loop(int n){
    int i=1;
    while (i<=n)
    {
        cout<<i;
        i++;
    }
    
}
int main()
{
    int x=3;
    Head_rec(x);
    loop(x);
}