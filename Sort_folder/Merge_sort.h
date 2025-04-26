#pragma once
#include <vector>
#include<iostream>
using namespace std;
void Merge(vector<long long>& arr, long long left, long long mid, long long right,long long &comparison) {
    long long n1 = mid - left + 1;
    long long n2 = right - mid;

    vector<long long> L(n1), R(n2);

    for (long long i = 0; i < n1; i++){
        comparison++;
        L[i] = arr[left + i];
    }
    for (long long j = 0; j < n2; j++){
        comparison++;
        R[j] = arr[mid + 1 + j];
    }
    long long i = 0, j = 0;
    long long k = left;

    while (i < n1 && j < n2) {
        comparison++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        comparison++;
        k++;
    }

    while (i < n1) {
        comparison++;
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        comparison++;
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort_re(vector<long long>& arr, long long left, long long right,long long &comparison) {
    if (left >= right){
        comparison++;
        return;

    }
        
    int mid = left + (right - left) / 2;

    MergeSort_re(arr, left, mid,comparison);
    MergeSort_re(arr, mid + 1, right,comparison);
    Merge(arr, left, mid, right,comparison);
}

long long MergeSort(vector<long long>& arr) {
    long long comparison=0;
    vector<long long>newarr = arr;
    long long n = newarr.size();

    MergeSort_re(newarr, 0, n - 1,comparison);
    return comparison;
}