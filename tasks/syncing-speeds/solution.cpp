#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, r = 1;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++) cin >> x[i];
    
    for (int i = n-2; i >= 0; i--) 
        r = ((r * x[i+1]) % x[i] ? 
             (r * x[i+1]) / x[i] + 1 : (r * x[i+1]) / x[i]
            );
    
    cout << r * x[0] << '\n';
}
