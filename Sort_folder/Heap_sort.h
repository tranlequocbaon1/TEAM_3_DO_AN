#pragma once
#include <iostream>
#include <vector>
using namespace std;

// Hàm vun đống
void heapify(vector<long long>& arr, int n, int i, long long& comparison) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    // So sánh con trái
    if (l < n) {
        comparison++;
        if (arr[l] > arr[largest])
            largest = l;
    }

    // So sánh con phải
    if (r < n) {
        comparison++;
        if (arr[r] > arr[largest])
            largest = r;
    }

    // Nếu cần hoán đổi và gọi đệ quy
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest, comparison);
    }
}

// Hàm Heap Sort chính
long long heapSort(vector<long long>& arr) {
    long long comparison = 0;
    int n = arr.size();

    // Xây dựng heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i, comparison);

    // Trích xuất từng phần tử từ heap
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);           // Đưa phần tử lớn nhất về cuối
        heapify(arr, i, 0, comparison); // Gọi heapify lại cho heap còn lại
        comparison++;
    }

    return comparison;
}
