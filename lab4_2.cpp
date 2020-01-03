#include<iostream>
#include<cmath>
using namespace std;

//Write function findDistance() here
float findDistance()
  {
    float u,a,t;
    cout << "u=";
    cin >> u;
    cout << "a=";
    cin >> a;
    cout << "t=";
    cin >> t;
   float s=(u*t)+0.5*a*(pow(t,2));
    return s;


  }
int main(){

  //Calling findDistance() using test cases
  cout << "s="<< findDistance();
  return 0;
}
