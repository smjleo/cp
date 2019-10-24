#include <iostream>
using namespace std;

int main(){
    int n, k, r;
    cin >> n >> k >> r;
    int* a = new int[k * n + 1], *b = new int[k * n + 1];
    int* t;
    for(int i = 0; i <= k*n; i++) a[i] = b[i] = 0;
    for(int i = 1; i <= k; i++) a[i] = 1;
    for(int i = 2; i <= n; i++){
        b[i] = 1;
        for(int j = i+1; j <= k*n; j++){
            b[j] = b[j-1] + a[j-1] - (j-k-1 >= 0 ? a[j-k-1] : 0);
        }
        for(int j = 0; j <= k*n; j++) {
            a[j] = 0;
        }
        cout << '\n';
        t = a;
        a = b;
        b = t;
    }
    cout << a[r] << '\n';
}
