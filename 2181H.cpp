#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long w, h, d, n;
    cin >> w >> h >> d >> n;

    
    vector<long long> divs;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i * i != n) divs.push_back(n / i);
        }
    }

    
    for (long long a : divs) {
        if (w % a == 0) { 
            for (long long b : divs) {
                if (h % b == 0 && n % (a * b) == 0) { 
                    long long c = n / (a * b);
                    if (d % c == 0) { 
                        cout << a - 1 << " " << b - 1 << " " << c - 1 << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
