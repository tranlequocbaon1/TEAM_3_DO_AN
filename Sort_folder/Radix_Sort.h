#pragma once
#include<iostream>
#include<vector>
using namespace std;

long long getMax(const vector<long long>& v) {
    long long mx = v[0];
    for (int i = 1; i < v.size(); i++){
        mx = max(mx, v[i]);
    }
    return mx;
}

void countSort(vector<long long>& v, long long exp, long long& comparison) {
    int n = v.size();
    vector<long long> output(n);
    int count[10] = {0};

    for (int i = 0; i < n; i++){
        comparison++;
        count[(v[i] / exp) % 10]++;
    }
    
    for (int i = 1; i < 10; i++){
        comparison++;
        count[i] += count[i - 1];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        comparison++;
        output[count[(v[i] / exp) % 10] - 1] = v[i];
        count[(v[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++){
        comparison++;
        v[i] = output[i];
    }
}

long long radixSort(vector<long long>& v) {
    long long comparison = 0;  
    long long m = getMax(v);
    for (long long exp = 1; m / exp > 0; exp *= 10){
        comparison++;
        countSort(v, exp, comparison);
    }
    return comparison;
}