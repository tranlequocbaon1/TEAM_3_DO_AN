#pragma once
#include<vector>
#include <iostream>
using namespace std;

long long bubbleSort(vector<long long>& v) {
    long long comparison=0;
    int n = v.size();

    
    for (int i = 0; i < n - 1; i++) {

        comparison ++;
        for (int j = 0; j < n - i - 1; j++) {
          
            if (v[j] > v[j + 1])
            {
                ++comparison;
                swap(v[j], v[j + 1]);
            }
              
        }
    }
    return comparison;
}
