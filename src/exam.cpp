#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int last = 0;
    for(int i = 0; i < n; i++){
        if(v[i].second >= last) last = v[i].second;
        else last = v[i].first;
    }
    cout << last;
}