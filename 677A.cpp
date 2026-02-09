#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, h;
 
    if (!(cin >> n >> h)) return 0;
 
    int totalWidth = 0;
 
    for (int i = 0; i < n; ++i) {
        int personHeight;
        cin >> personHeight;
 
        if (personHeight > h) {
            totalWidth += 2; 
        } else {
            totalWidth += 1; 
        }
    }
    cout << totalWidth << endl;
    return 0;
}
