#pragma once
#include<iostream>
#include<vector>
#include <chrono>
using namespace std;
using namespace std::chrono;
// first= count(comparison)
// second= time_complete 
pair<long long , long long> Performance(vector<long long>v,long long(*function)(vector<long long>&)){
	vector<long long> a=v;
	auto start=high_resolution_clock::now();// bắc đầu bấm giờ
	long long count=function(a);
	auto end=high_resolution_clock::now();// bấm đừng
	long long time_complete=duration_cast<milliseconds>(end-start).count();// gán giá trị
	pair<long long, long long> ans={count,time_complete};
	return ans;
		
} 
