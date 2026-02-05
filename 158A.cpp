#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;
 
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
 
    int threshold_score = scores[k - 1];
    int advancers = 0;
 
    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold_score && scores[i] > 0) {
            advancers++;
        } else {
            break;
        }
    }
 
    cout << advancers << endl;
 
    return 0;
}
