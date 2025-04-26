#pragma once
#include <iostream>
#include<vector>
using namespace std;
long long SelectionSort(vector<long long> &arr) {
    long long comparison=0;
    vector <long long> newarr = arr;
    long long n = newarr.size();

    for (int i = 0; i < n - 1; ++i) {
        comparison++;
        long long min_idx = i;

        for (int j = i + 1; j < n; ++j) {
            comparison++;
            if (newarr[j] < newarr[min_idx]) {
                comparison++;
                min_idx = j;
            }
        }

        swap(newarr[i], newarr[min_idx]);
    }
    return comparison;
}
