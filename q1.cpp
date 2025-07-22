void selectionsort_rec(int v[], int n, int i = 0) {
    if (i >= n - 1) return;
    int min = i;
    for (int j = i + 1; j < n; j++) {
        if (v[j] < v[min]) min = j;
    }
    int tmp = v[i];
    v[i] = v[min];
    v[min] = tmp;
    selectionsort_rec(v, n, i + 1);
}