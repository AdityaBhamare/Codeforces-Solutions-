#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    bool found_three = false;
    int empty_count = 0;
 
   
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            empty_count++;
        }
 
        if (i <= n - 3 && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
            found_three = true;
        }
    }
 
    if (found_three) {
        cout << 2 << endl;
    } else {
        cout << empty_count << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
