#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t; cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int countM = 0;
    int l = 0;
    int sum = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum > t){
            sum -= a[l];
            l++;
        }
        countM = max(countM, r - l + 1);
    }
    cout << countM;
    return 0;
}