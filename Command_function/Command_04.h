#pragma once
#include <iostream>
#include <vector>
#include"Sort_folder/SortHeader.h"
#include"File_handing/Data_from_file.h"
#include"performance.h"
void luu_ketqua(int pos, pair<long long, long long>& gia_tri_ss, vector<long long> inputfile){
    switch (pos)
        {
        case 0:
            pair<long long, long long> gia_tri_ss = Performance(inputfile, Binary_insetion_sort);
            break;
        case 1:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, bubbleSort);
            break;
        }
        case 2:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, countSort);
            break;
        }
        case 3: 
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, flashSort);
            break;
        }
        case 4:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, heapSort);
            break;
        }
        case 5:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, insertionSort);
            break;
        }
        case 6:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, MergeSort);
            break;
        }
        case 7:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, QuickSort);
            break;
        }
        case 8:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, radixSort);
            break;
        }
        case 9:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, SelectionSort);
            break;
        }
        case 10:
        {
            pair<long long, long long> gia_tri_ss = Performance(inputfile, CocktailSort);
            break;
        }
        default:
        {
            {
                pair<long long, long long> gia_tri_ss = Performance(inputfile, shellSort);
                break;
            }
        }
        }
}
void command_04(int size, char *arr[]){

    int pos;
    vector<long long> inputfile = getdata(arr[3]);
    string s[12] = {"binary-insertion-sort","bubble-sort","counting-sort","flash-sort","heap-sort","insertion-sort","merge-sort","quick-sort","radix-sort","selection-sort","shaker-sort","shell-sort"};
    pair<long long, long long> gia_tri_ss1, gia_tri_ss2;
    for (int j = 0; j < 12; j++)
    {
        if (s[j] == arr[2])
        {
            pos = j;
            break;
        }
    }
    luu_ketqua(pos, gia_tri_ss1, inputfile);
    for (int j = 0; j < 12; j++)
    {
        if (s[j] == arr[3])
        {
            pos = j;
            break;
        }
    }
    luu_ketqua(pos, gia_tri_ss2, inputfile);
    cout<<"COMPARE MODE"<<endl;
    cout<<"Algorithm: "<<arr[2]<<" | "<<arr[3]<<endl;
    cout<<"Input file: "<<arr[4]<<endl;
    cout<<"Input size: "<<inputfile.size()<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Running time: "<<gia_tri_ss1.first<<" | "<<gia_tri_ss2.first<<endl;
    cout<<"Comparisions: "<<gia_tri_ss1.second<<" | "<<gia_tri_ss2.second<<endl;
}