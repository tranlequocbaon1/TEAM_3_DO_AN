#include<iostream>
#include<vector>
#include <chrono>
	using namespace std;
 using namespace std::chrono; 
long long shellSort(vector<long long>& v){
	long long cnt=0;
	int n = v.size();
	for (int gap = n/2; gap > 0; gap /= 2){
		for (int i = gap; i < n; i += 1){
          		long long temp = v[i];
            		int j;            
          		for (j = i; j >= gap; j -= gap) {
    				cnt++; 
		    		if (v[j - gap] > temp)
		        			v[j] = v[j - gap];
		    		else
		        			break;
			}
			v[j]=temp;
    		}
    	}
    return cnt;    
}
