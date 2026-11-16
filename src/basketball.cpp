#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> l1(n), l2(n);
    for(int i = 0; i < n; i++) cin >> l1[i];
    for(int i = 0; i < n; i++) cin >> l2[i];
    vector<long long> a(n), b(n);
    a[0] = l1[0]; b[0] = l2[0];
    for(int i = 1; i < n; i++){
        a[i] = max(a[i-1], b[i-1] + l1[i]);
        b[i] = max(b[i-1], a[i-1] + l2[i]);
    }
    cout << max(a[n-1], b[n-1]);
}