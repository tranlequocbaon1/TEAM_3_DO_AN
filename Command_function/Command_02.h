#pragma once
#include <iostream>
#include <vector>
#include"Sort_folder/SortHeader.h"
#include"createData/RandomData.h"
#include"createData/ReverseData.h"
#include"performance.h"
void tao_dulieu(char input_order[], vector<long long>& dulieutrave, int num){
    if (input_order == "-rand")
        {
            cout<<"Input order: Randomize"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> tmp;
            RandomData(dulieutrave, num);   
        }
        else if (input_order == "-nsorted")
        {
            cout<<"Input order: Nearly Sorted"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> tmp;
            NsortedData(dulieutrave, num);   
        }
        else if (input_order == "-sorted")
        {
            cout<<"Input order: Sorted"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> tmp;
            SortedData(dulieutrave, num);
        }
        else if (input_order == "-rev")
        {
            cout<<"Input order: Reversed"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> tmp;
            ReverseData(dulieutrave, num);
        }
}
void command_02(int size, char *arr[]){
    pair<long long, long long> return_val;
    cout<<"ALGORITHM MODE"<<endl;
    cout<<"Algorithm: "<<arr[2]<<endl;
    cout<<"Input size: "<<arr[3]<<endl;
    int num = atoi(arr[3]);
    if (arr[2] == "binary-insertion-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, Binary_insetion_sort);
        
    }


    else if (arr[2] == "bubble-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, bubbleSort);
    }


    else if (arr[2] == "counting-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, countSort);
    }


    else if (arr[2] == "flash-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, flashSort);
    }


    else if (arr[2] == "heap-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, heapSort);
    }


    else if (arr[2] == "insertion-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, insertionSort);
    }

    else if (arr[2] == "merge-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, MergeSort);
    }


    else if (arr[2] == "quick-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, QuickSort);
    }


    else if (arr[2] == "radix-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, radixSort);
    }


    else if (arr[2] == "selection-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, SelectionSort);
    }


    else if (arr[2] == "shaker-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, CocktailSort);
    }


    else if (arr[2] == "shell-sort" )
    {
        vector<long long> tmp;
        tao_dulieu(arr[4], tmp, num);
        return_val = Performance(tmp, shellSort);
    }

    if (arr[5] == "-time")
    {
        cout<<"Running time : "<<return_val.second<<endl;
    }
    else if (arr[5] == "-comp")
    {
        cout<<"Comparisions : "<<return_val.first<<endl;
    }
    else if (arr[5] == "-both")
    {
        cout<<"Running time : "<<return_val.second<<endl;
        cout<<"Comparisions : "<<return_val.first<<endl;
    }
}