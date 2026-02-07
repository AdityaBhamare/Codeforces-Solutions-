#include <iostream>
#include <string>
 
int main() {
    int n;
    std::string s;
 
    if (!(std::cin >> n)) return 0;
    
    std::cin >> s;
 
    int removals = 0;
 
    for (int i = 1; i < n; ++i) {
 
        if (s[i] == s[i - 1]) {
            removals++;
        }
    }
    std::cout << removals << std::endl;
 
    return 0;
}
