#include <iostream>
using namespace std;

void selectionsort(int v[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j)
            if (v[j] < v[min]) min = j;
        int x = v[i]; v[i] = v[min]; v[min] = x;
    }
}

int main() {
    int v[] = {5, 2, 8, 3, 1};
    int n = sizeof(v) / sizeof(v[0]);
    selectionsort(v, n);
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}