#include <iostream>
using namespace std;

int arrange(int n);
int main(int argc, char const *argv[])
{
    cout << "input x:";
    int x;
    cin >> x;
    if (x > 13) {
        cout << "warning: x is too big, result will overflow!!!" << endl;
    }
    cout << "arrange(" << x << ")=" << arrange(x) << endl;
    return 0;
}

int arrange(int n)
{
    if (n == 0) {
        return 1;
    }
    else {
        return n * arrange(n - 1);
    }
}