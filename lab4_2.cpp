#include<iostream>
#include<cmath>
using namespace std;

//Write function findDistance() here
float findDistance()
  {
    float u,a,t,s;
    cout << "ENTER u:";
    cin >> u;
    cout << "ENTER a:";
    cin >> a;
    cout << "ENTER t:";
    cin >> t;
    s=(u*t)+((a*(t*t))/2);
    cout << "s=" << s;


  }
int main(){

  //Calling findDistance() using test cases
  cout << findDistance();

  return 0;
}
