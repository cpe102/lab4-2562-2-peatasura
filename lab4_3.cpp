#include<iostream>
using namespace std;
int findDivisor()
{
    int x,y;
    y=2;
    cout <<"ENTER x:";
    cin >> x;
    if (x>1)
    {
        while ( x%y!=0)
        {
            y++;
        }
        cout << "y=" << y;
    }
    
}
int main()
{
    findDivisor();
}
