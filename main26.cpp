#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, sum; cin >> n;
            b = n % 10;
            a = n / 10;
            sum = a + b;
            cout << sum << endl;
    }
    return 0;
}