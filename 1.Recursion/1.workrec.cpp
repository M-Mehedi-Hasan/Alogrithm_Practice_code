#include <iostream>
using namespace std;

//first print value then calling function
//this function Time complexity is O(n) 
//"        "    space complexity is O(n) 
void Recursion(int N)
{
    if (N>0)//Base Condition
    {
       cout<<N<<endl;  //print this now 'N' th value
       Recursion(N-1); //function  calling Itself.
                        

    }
    
}


//different procedure work's Recursion Function


//first calling function then print value
void Recursion2(int K){
    if (K>0) 
    {
        Recursion2(K-1); 
        cout<<K<<endl;     
    }
    
}


int main()
{   int BEG=10;
    Recursion(BEG);
    Recursion2(BEG);
}