#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    int k;
    
   if (!(cin >> n >> k)) return 0;
 
    for (int i = 0; i < k; i++) {
       
        if (n % 10 != 0) {
            n--;
        } 
 
        else {
            n /= 10;
        }
    }
    cout << n << endl;
    return 0;
}
