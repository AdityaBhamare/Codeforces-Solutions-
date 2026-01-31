#include <iostream>
 
using namespace std;
 
int main() {
    int n, problemsSolved = 0;
    cin >> n;
 
    while (n--) {
        int p, v, t;
        cin >> p >> v >> t;
        
        
        if (p + v + t >= 2) {
            problemsSolved++;
        }
    }
 
    cout << problemsSolved << endl;
    return 0;
}
