#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    
    insertionSort(a);
    cout << "Mang sau khi insertion sort: ";
    for (int x : a) cout << x << " ";
}
