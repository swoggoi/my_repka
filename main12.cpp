#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int answer = -1;
        for (auto [val, count] : freq) {
            if (count >= 3) {
                answer = val;
                break;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
