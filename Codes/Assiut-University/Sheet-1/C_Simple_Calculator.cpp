#include<iostream>
using namespace std;
int main()
{
    long long int X,Y,summation,multiplication,subtraction;

    cin>>X >>Y;
    summation=X+Y;
    multiplication=X*Y;
    subtraction=X-Y;

    cout<<X <<" + " <<Y <<" = "<<summation<<endl;
    cout<<X <<" * " <<Y <<" = "<<multiplication<<endl;
    cout<<X <<" - " <<Y <<" = "<<subtraction;

    return 0;
}
