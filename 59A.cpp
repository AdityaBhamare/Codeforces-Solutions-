#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int upper_count = 0;
    int lower_count = 0;
 
 
    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }
 
    if (upper_count > lower_count) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
 
    cout << s << endl;
 
    return 0;
}
