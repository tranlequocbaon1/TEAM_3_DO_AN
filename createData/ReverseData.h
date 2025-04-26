#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void ReverseData(vector<long long>& a, int n) {
    ofstream outFile("input.txt"); 
    if (!outFile) {
        cout << "Không thể mở file input.txt\n";
        return;
    }

    outFile << n << "\n"; 

    a.resize(n); 
    for (int i = 0; i < n; i++) {
        a[i] = n - 1 - i;
        outFile << a[i] << " "; 
    }

    outFile.close(); 
}
