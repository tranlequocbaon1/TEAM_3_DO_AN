#pragma once
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int binarySearch(vector<long long> a, int item, int low, int high, long long& comparison) {
    if (high <= low) {
        return (item > a[low]) ? (low + 1) : low;
    }

    int mid = (low + high) / 2;
    comparison++;

    if (item == a[mid]) {
        return mid + 1;
    }

    comparison++;

    if (item > a[mid]) {
        return binarySearch(a, item, mid + 1, high, comparison);
    }

    comparison++;
    return binarySearch(a, item, low, mid - 1, comparison);
}

long long Binary_insetion_sort(vector<long long>& a) {
    long long comparison = 0;
    int n = a.size();
    int i, loc, j, selected;

    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = a[i];
        loc = binarySearch(a, selected, 0, j, comparison);

        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
            comparison++;
        }

        a[j + 1] = selected;
    }

    return comparison;
}
