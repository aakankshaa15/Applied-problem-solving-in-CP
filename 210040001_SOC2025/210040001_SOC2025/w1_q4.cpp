#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minGondolas(vector<int>& weights, int x) {
    sort(weights.begin(), weights.end());  // Sort weights
    int i = 0;                  // Lightest child
    int j = weights.size() - 1; // Heaviest child
    int gondolas = 0;

    while (i <= j) {
        if (weights[i] + weights[j] <= x) {
            // Pair both children
            i++;
            j--;
        } else {
            // Only the heavier child goes
            j--;
        }
        gondolas++;  // One gondola used in any case
       
    }
     return gondolas;

} 

int main() {
    int n, x;
    cout << "Enter number of children: ";
    cin >> n;

    cout << "Enter maximum weight per gondola: ";
    cin >> x;

    vector<int> weights(n);
    cout << "Enter weights of the children:\n";
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int result = minGondolas(weights, x);
    cout << "Minimum number of gondolas needed: " << result << endl;

    return 0;
}



