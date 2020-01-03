#include<iostream>
#include<cmath>
using namespace std;
float cal()
{
    float x,y,q,w,e,r;
    cout << "ENTER X:";
    cin >> x;
    q=3*pow(x,3);
    w=2*2.71828;
    e=pow(2,(2*x)+1);
    r=sqrt(x*x+1);
    y=q+w+e+r;
    cout << "y="<< y;
}
int main()
{
   
    cout << cal();
    return 0;
}
