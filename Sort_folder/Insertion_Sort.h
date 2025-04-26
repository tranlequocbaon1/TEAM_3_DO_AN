#pragma once
#include<iostream>
#include <vector>
using namespace std;

long long insertionSort(vector<long long>& v) {
    long long comparison=0;
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        comparison++;
        long long key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            comparison++;
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
    return comparison;
}
