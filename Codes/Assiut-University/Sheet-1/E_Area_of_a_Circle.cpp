#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double R,pie,area;
    cin>>R;
    pie=3.141592653;
    area=pie*(R*R);

    cout<<fixed<<setprecision(9)<<area;
}
