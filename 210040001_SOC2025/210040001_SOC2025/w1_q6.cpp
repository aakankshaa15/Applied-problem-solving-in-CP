#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Function to find the minimum number of moves
ll solve(ll arr, ll N)
{
    // variable to store the final answer
    ll ans = 0;
    // Iterate over all the elements and compare them with
    // the previous element
    for (ll i = 1; i < N; i++) {
        if (arr[i - 1] > arr[i]) {
            ans += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    return ans;
}

int main()
{
    // Sample Input
    ll N = 5;
    ll arr[N] = { 3, 2, 5, 1, 7 };

    cout << solve(arr, N) << "\n";
    return 0;
}