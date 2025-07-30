#include <bits/stdc++.h>
using namespace std;

// function to find the missing number from 1 to N
int solve(int N, int* arr)
{
    // Variable to store the value of XOR
    int XOR = 0;
    for (int i = 0; i < N - 1; i++) {
        // XOR of all elements in arr[]
        XOR ^= arr[i];
        // XOR of all numbers from 1 to N - 1
        XOR ^= (i + 1);
    }
    XOR ^= N;
    return XOR;
}

int main()
{
    // Sample Input
    int N = 5;
    int arr[] = {2, 3, 1, 5};

    cout << solve(N, arr) << "\n";
    return 0;
}