#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a) {
    int n = a.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    
    bubbleSort(a);
    cout << "Mang sau khi bubble sort: ";
    for (int x : a) cout << x << " ";
}
