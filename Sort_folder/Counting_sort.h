<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
=======
#pragma once
#include<iostream>
#include<vector>
>>>>>>> 595a8ea (Cập nhật tất cả các thay đổi)
using namespace std;
long long countSort(vector<long long>& inputArray)
{
    long long comparison = 0;
    int N = inputArray.size();
<<<<<<< HEAD

    
=======
>>>>>>> 595a8ea (Cập nhật tất cả các thay đổi)
    int M = 0;

    for (int i = 0; i < N; i++) {
        M = max(M, (int)inputArray[i]);
        comparison++;
    }

<<<<<<< HEAD
    
    vector<int> countArray(M + 1, 0);

    

    for (int i = 0; i < N; i++)
=======
    vector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++) {
>>>>>>> 595a8ea (Cập nhật tất cả các thay đổi)
        countArray[inputArray[i]]++;
        comparison++;
    }

<<<<<<< HEAD
    
    for (int i = 1; i <= M; i++)
=======
    for (int i = 1; i <= M; i++) {
>>>>>>> 595a8ea (Cập nhật tất cả các thay đổi)
        countArray[i] += countArray[i - 1];
        comparison++;
    }

<<<<<<< HEAD
    
=======
>>>>>>> 595a8ea (Cập nhật tất cả các thay đổi)
    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--) {
        comparison++;
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    comparison++;
    return comparison;
}
