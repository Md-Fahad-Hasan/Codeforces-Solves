#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long int f_n = (n + a - 1) / a;
    long long int f_m = (m + a - 1) / a;

    cout << f_n * f_m << endl;

    return 0;
}
