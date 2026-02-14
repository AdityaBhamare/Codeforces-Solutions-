#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long k,n,w;
    
    if(!(cin >> k >> n >> w))
    return 0;
    
    long long total_cost = k*(w*(w+1)/2);
    
    long long borrow = total_cost - n;
    
    if (borrow > 0){
        cout << borrow << endl;
    }else {
        cout << 0 << endl;
    }
    return 0;
}
