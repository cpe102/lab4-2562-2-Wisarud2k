#include<iostream>

using namespace std;

int findDivisor(int x)
{
    int n=2;
    while(n < x){
        if(x%n == 0){
            return n;   
        }
        n++;
        
        
    }
}

int main()
{
    cout<<findDivisor(10)<<"\n";
    cout<<findDivisor(97)<<"\n";
    cout<<findDivisor(221)<<"\n";
    return 0;
}

