#include"performance.h"
#include"Binary_insertion_sort.h"
#include"Counting_sort.h"
#include"flashSort.h"
#include"Heap_sort.h"
#include"Insertion_Sort.h"
#include"RAdix_Sort.h"
#include"Merge_sort.h"
#include"Quick_sort.h"
#include"Selection_sort.h"
#include"shaker_sort.h"
#include"Shell_Sort.h"
int main(){
    int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	vector<long long> v(n);
	cout << "Nhap cac phan tu:\n";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	pair<long long, long long>result = Performance(v,shellSort);
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	cout << "\nSo lan so sanh: " << result.first<<endl;
	cout << "\nThoi gian thuc hien: " << result.second<< " milliseconds\n";

	return 0;
}
