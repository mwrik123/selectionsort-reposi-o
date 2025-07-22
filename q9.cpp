#include <iostream>
#include <ctime>
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
    const int n = 10000;
    int* v = new int[n];
    for (int i = 0; i < n; i++) v[i] = n - i;
    clock_t start = clock();
    selectionsort(v, n);
    clock_t end = clock();
    cout << "Tempo: " << (double)(end - start) / CLOCKS_PER_SEC << " segundos" << endl;
    delete[] v;
    return 0;
}