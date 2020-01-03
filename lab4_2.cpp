#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t)
{
  double s;
  s=(u*t)+0.5*(a*(pow(t,2)));
  return s;
}

int main(){
  cout<<findDistance(0,0.5,1)<<"\n";
  cout<<findDistance(1.5,-1,2)<<"\n";
  cout<<findDistance(5,4,3)<<"\n";
  

  //Calling findDistance() using test cases

  return 0;
}
