#include <bits/stdc++.h>
using namespace std;

bool linearSearch(const vector<int>& a, int x) {
    for (int v : a) if (v == x) return true;
    return false;
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int x;
    cout << "Nhap phan tu X can tim: ";
    cin >> x;
    
    if (linearSearch(a, x)) 
        cout << "Tim thay " << x << " trong mang.\n";
    else 
        cout << x << " khong co trong mang.\n";
}
