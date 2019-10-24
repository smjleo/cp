#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n, k, r;
    cin >> n >> k >> r;
    /* working sol
    int* arr[n+1];
    for(int i = 1; i < n+1; i++){
        arr[i] = new int[k * n + 1];
        for(int j = 0; j < k*n + 1; j++) arr[i][j] = 0;
    }
    for(int i = 1; i < k+1; i++) arr[1][i] = 1;
    for(int i = 2; i < n+1; i++){
        arr[i][i] = 1;
        for(int j = i+1; j < k * n + 1; j++){
            arr[i][j] = arr[i][j-1] + arr[i-1][j-1] - (j-k-1 >= 0 ? arr[i-1][j-k-1] : 0);
        }
    }
    cout << arr[n][r] << '\n';
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < k * n + 1; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    } */ 

    // 1d array sol
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
            cout << b[j] << ' ';
        }
        cout << '\n';
        t = a;
        a = b;
        b = t;
    }
    cout << a[r] << '\n';;
}
