#pragma once
#include<vector>
#include <iostream>
using namespace std;

vector<long long> bubbleSort(vector<long long>& v, long long& comparison) {
    int n = v.size();

    
    for (int i = 0; i < n - 1; i++) {

        
        for (int j = 0; j < n - i - 1; j++) {
          
            if (v[j] > v[j + 1])
            {
                ++comparison;
                swap(v[j], v[j + 1]);
            }
              
        }
    }
    return v;
}