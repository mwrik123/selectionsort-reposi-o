void selectionsort_decrescente(int v[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int max = i;
        for (int j = i + 1; j < n; ++j)
            if (v[j] > v[max]) max = j;
        int x = v[i]; v[i] = v[max]; v[max] = x;
    }
}