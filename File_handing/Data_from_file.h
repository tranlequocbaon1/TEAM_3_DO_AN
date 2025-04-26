#pragma once
#include <iostream>
#include <vector>
#include<string>
#include<map>
#include<fstream>
using namespace std;
vector<long long> getdata(string filename){
    vector<long long> return_value;
    int n;
    ifstream fin(filename);
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        fin>> x;
        return_value.push_back(n);
    }
    fin.close();
    return return_value;
}