#include <bits/stdc++.h>
using namespace std;
//collatz sequence
int main() {
    long long n;
    cin >> n;

    while (n>=1) {
        cout << n << " ";
        if (n == 1) break;  // stop condition

        if (n % 2 == 0)
            n /= 2;        // even case
        else
            n = 3 * n + 1; // odd case
    }

    
    return 0;
}