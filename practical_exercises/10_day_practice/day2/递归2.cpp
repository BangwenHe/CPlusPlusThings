#include <iostream>
// uncomment to disable assert()
// #define NDEBUG
#include <cassert>
 
// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))
using namespace std;

int f(int n, int k);
int main(int argc, char const *argv[])
{
    cout << "Caclculate Pascal Triangles: " << endl;
    int n, k;
    cout << "input row(>=0):";
    cin >> n;
    cout << "input col(>=0):";
    cin >> k;
    assert(n >= 0 && k >= 0 && k <= n);
    cout << "f(" << n << "," << k << ")=" << f(n, k) << endl;
    return 0;
}

int f(int n, int k)
{
    if ((n == k) || (k == 0))
    {
        return 1;
    }
    else
    {
        return f(n - 1, k - 1) + f(n - 1, k);
    }
}