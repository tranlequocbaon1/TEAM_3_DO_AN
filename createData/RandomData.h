#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void RandomData(int a[], int n) {
    srand((unsigned int)time(NULL)); 

    ofstream outFile("input.txt"); 
    if (!outFile) {
        cout << "Không thể mở file để ghi dữ liệu.\n";
        return;
    }

    outFile << n << "\n"; 

    for (int i = 0; i < n; i++) {
        a[i] = rand() % n;       
        outFile << a[i] << " ";  
    }

    outFile.close(); 
}
