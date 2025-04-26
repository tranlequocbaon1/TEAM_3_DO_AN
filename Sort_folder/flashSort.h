#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long flashSort(vector<long long>& inputArray) {
    long long comparison = 0;
    int n = inputArray.size();
    if (n <= 1) return comparison;

    int m = int(0.45 * n);
    if (m < 1) m = 1; // đảm bảo ít nhất có 1 lớp
    vector<int> L(m, 0);

    // Bước 1: Tìm min, max và vị trí max
    long long minVal = inputArray[0], maxVal = inputArray[0];
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        comparison++;
        if (inputArray[i] < minVal) {
            minVal = inputArray[i];
        }
        if (inputArray[i] > maxVal) {
            maxVal = inputArray[i];
            maxIdx = i;
        }
        comparison++;
    }

    if (minVal == maxVal) return comparison; // Mảng toàn giá trị giống nhau

    // Hàm tính lớp (class index)
    auto getClass = [&](long long val) -> int {
        return int((m - 1) * (val - minVal) / (maxVal - minVal));
    };

    // Bước 2: Đếm số phần tử trong mỗi lớp
    for (int i = 0; i < n; i++) {
        comparison++;
        int k = getClass(inputArray[i]);
        L[k]++;
    }

    // Bước 3: Tính prefix sum
    for (int i = 1; i < m; i++) {
        comparison++;
        L[i] += L[i - 1];
    }

    // Bước 4: Di chuyển phần tử lớn nhất về đầu
    swap(inputArray[maxIdx], inputArray[0]);

    // Bước 5: Phân phối các phần tử về đúng lớp
    int count = 0, i = 0, k = m - 1;
    while (count < n - 1) {
        comparison++;
        while (i >= L[k]) {
            k = getClass(inputArray[i]);
        }

        long long evicted = inputArray[i];
        while (i != L[k]) {
            comparison++;
            k = getClass(evicted);
            long long temp = inputArray[--L[k]];
            inputArray[L[k]] = evicted;
            evicted = temp;
            count++;
        }
        i++;
    }

    // Bước 6: Dùng insertion sort để hoàn thiện sắp xếp
    for (int i = 1; i < n; i++) {
        comparison++;
        long long key = inputArray[i];
        int j = i - 1;
        while (j >= 0 && inputArray[j] > key) {
            comparison++;
            inputArray[j + 1] = inputArray[j];
            j--;
        }
        inputArray[j + 1] = key;
    }

    return comparison;
}
