#include <bits/stdc++.h>
using namespace std;

vector<int> parents;

int findset(int n) {
    if (parents[n] == n) return n;
    return parents[n] = findset(parents[n]);
}

void unionset(int a, int b) {
    if (rand()%2) swap(a, b);
    int x = findset(a);
    int y = findset(b);
    if (x == y) return;
    parents[x] = y;
}

int main(){
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) parents.push_back(i);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        unionset(a, b);
    }
    for (auto &i : parents) i = findset(i);
    cout << unordered_set<int>(parents.begin(), parents.end()).size()-1;
}
