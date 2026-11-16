#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int chill = 0; int sport = 1000; int contest = 1000;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        int nR = min({chill, sport, contest}) + 1;
        int nS = (a == 2 || a == 3) ? min(chill, contest) : 1000;
        int nC = (a == 1 || a == 3) ? min(chill, sport) : 1000;
        chill = nR; sport = nS; contest = nC;
    }
    cout << min({chill, sport, contest}) << endl;
}