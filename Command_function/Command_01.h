#pragma once
#include <iostream>
#include <vector>
#include"Sort_folder/SortHeader.h"
#include"File_handing/Data_from_file.h"
#include<map>
#include"performance.h"
void command_01(int size, char *arr[]){
    pair<long long, long long> tmp;
    vector<long long> inputfile = getdata(arr[3]);
    cout<<"ALGORITHM MODE"<<endl;
    cout<<"Algorithm: "<<arr[2]<<endl;
    cout<<"Input file: "<<arr[3]<<endl;
    cout<<"Input size: "<<inputfile.size()<<endl;
    cout<<"------------------------------------"<<endl;
    if (arr[2] == "binary-insertion-sort" )
    {
        tmp = Performance(inputfile, Binary_insetion_sort);
    }
    else if (arr[2] == "bubble-sort" )
    {
        tmp = Performance(inputfile, bubbleSort);
    }
    else if (arr[2] == "counting-sort" )
    {
        tmp = Performance(inputfile, countSort);
    }
    else if (arr[2] == "flash-sort" )
    {
        tmp = Performance(inputfile, flashSort);
    }
    else if (arr[2] == "heap-sort" )
    {
        tmp = Performance(inputfile, heapSort);
    }
    else if (arr[2] == "insertion-sort" )
    {
        tmp = Performance(inputfile, insertionSort);
    }
    else if (arr[2] == "merge-sort" )
    {
        tmp = Performance(inputfile, MergeSort);
    }
    else if (arr[2] == "quick-sort" )
    {
        tmp = Performance(inputfile, QuickSort);
    }
    else if (arr[2] == "radix-sort" )
    {
        tmp = Performance(inputfile, radixSort);
    }
    else if (arr[2] == "selection-sort" )
    {
        tmp = Performance(inputfile, SelectionSort);
    }
    else if (arr[2] == "shaker-sort" )
    {
        tmp = Performance(inputfile, CocktailSort);
    }
    else if (arr[2] == "shell-sort" )
    {
        tmp = Performance(inputfile, shellSort);
    }
    
    if (arr[4] == "-time")
    {
        cout<<"Running time : "<<tmp.second<<endl;
    }
    else if (arr[4] == "-comp")
    {
        cout<<"Comparisions : "<<tmp.first<<endl;
    }
    else if (arr[4] == "-both")
    {
        cout<<"Running time : "<<tmp.second<<endl;
        cout<<"Comparisions : "<<tmp.first<<endl;
    }
}