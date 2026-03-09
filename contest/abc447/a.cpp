#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int v = (n+1) / 2;
    // cout << v << " " << m << endl;
    if (v >= m) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}