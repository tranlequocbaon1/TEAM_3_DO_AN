#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> flashSort(vector<long long>& inputArray) {
    int n = inputArray.size();
    if (n <= 1) return inputArray;

    int m = int(0.45 * n);  // Số lượng lớp (class), thường từ 0.1n → 0.5n
    vector<int> L(m, 0);    // Mảng đếm số phần tử mỗi lớp

    // Bước 1: Tìm min và max
    long long minVal = inputArray[0], maxVal = inputArray[0];
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (inputArray[i] < minVal) minVal = inputArray[i];
        if (inputArray[i] > maxVal) {
            maxVal = inputArray[i];
            maxIdx = i;
        }
    }

    if (minVal == maxVal) return inputArray; // Tất cả phần tử bằng nhau

    // Bước 2: Phân lớp
    auto getClass = [&](long long val) {
        return int((m - 1) * (val - minVal) / (maxVal - minVal));
    };

    for (int i = 0; i < n; i++)
        L[getClass(inputArray[i])]++;

    // Bước 3: Tính prefix sum để biết chỉ số bắt đầu của mỗi lớp
    for (int i = 1; i < m; i++)
        L[i] += L[i - 1];

    // Bước 4: Hoán vị để đưa phần tử vào đúng lớp
    swap(inputArray[maxIdx], inputArray[0]);
    int count = 0, i = 0, k = m - 1;
    while (count < n - 1) {
        while (i >= L[k]) k = getClass(inputArray[i]);
        long long evicted = inputArray[i];
        while (i != L[k]) {
            k = getClass(evicted);
            long long tmp = inputArray[--L[k]];
            inputArray[L[k]] = evicted;
            evicted = tmp;
            count++;
        }
        i++;
    }

    // Bước 5: Dùng insertion sort trong từng lớp
    for (int i = 1; i < n; i++) {
        long long key = inputArray[i];
        int j = i - 1;
        while (j >= 0 && inputArray[j] > key) {
            inputArray[j + 1] = inputArray[j];
            j--;
        }
        inputArray[j + 1] = key;
    }

    return inputArray;
}
