#pragma once
#include <iostream>
#include<vector>
using namespace std;
int partition(vector<long long>& arr, long long low, long long high, long long &comparison) {
    long long pivot = arr[high];
    long long i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        comparison++;
        if (arr[j] < pivot) {
            comparison++;
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort_re(vector<long long>& arr, long long low, long long high,long long &comparison) {
    if (low < high) {
        comparison++;
        long long pi = partition(arr, low, high,comparison);

        QuickSort_re(arr, low, pi - 1,comparison);
        QuickSort_re(arr, pi + 1, high,comparison);
    }
    comparison++;
}

long long QuickSort(vector<long long > &arr) {
    long long comparison=0;
    vector <long long > newarr = arr;
    long long n = newarr.size();

    QuickSort_re(newarr,0,n-1,comparison);
    return comparison;
}
