#pragma once
#include <vector>
#include <iostream>
using namespace std;

long long CocktailSort(vector<long long>& a) {
    long long comparison = 0;
    int n = a.size();
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped) {
        swapped = false;

        // Duyệt từ trái sang phải
        for (int i = start; i < end; ++i) {
            comparison++;
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;
        --end;

        // Duyệt từ phải sang trái
        for (int i = end - 1; i >= start; --i) {
            comparison++;
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }

        ++start;
    }

    return comparison;
}
