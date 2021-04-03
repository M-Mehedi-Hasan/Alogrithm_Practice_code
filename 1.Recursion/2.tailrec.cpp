#include <iostream>
using namespace std;

//Tail Recursion 
void Tail_Rec(int n)
{
    if (n>0)
    {
      cout<<n<<endl;
      Tail_Rec(n-1);
    }
    
}

//same program using loop
void Loop(int n){
    while (n>0)
    {
       cout<<n<<endl;
       n--;
    }
    
}
//loop is very efficiency complexity

int main()
{
    int n=3;
    Tail_Rec(n);
    Loop(n);
}