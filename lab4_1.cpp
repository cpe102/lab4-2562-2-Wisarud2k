#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double y;
    int x;
    cout<<"Enter x = ";
    cin>>x;
    y=3*(pow(x,3))+2*2.71828+pow(2,(2*x)+1)+sqrt(pow(x,2)+1);
    cout<<"Result y = "<<y;
    return 0;
}
