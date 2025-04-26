#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long countSort(vector<long long>& inputArray)
{
    long long comparison = 0;
    int N = inputArray.size();
    int M = 0;

    for (int i = 0; i < N; i++) {
        M = max(M, (int)inputArray[i]);
        comparison++;
    }

    vector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++) {
        countArray[inputArray[i]]++;
        comparison++;
    }

    for (int i = 1; i <= M; i++) {
        countArray[i] += countArray[i - 1];
        comparison++;
    }

    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--) {
        comparison++;
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    comparison++;
    return comparison;
}
