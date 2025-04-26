#pragma once
#include <iostream>
#include <vector>
#include"Sort_folder/SortHeader.h"
#include"performance.h"
void cout_cmd(char bien_mau[], pair<long long, long long> tmp){
    if (bien_mau == "-time")
        {
            cout<<"Running time : "<<tmp.second<<endl<<endl;
        }
        else if (bien_mau == "-comp")
        {
            cout<<"Comparisions : "<<tmp.first<<endl<<endl;
        }
        else if (bien_mau == "-both")
        {
            cout<<"Running time : "<<tmp.second<<endl;
            cout<<"Comparisions : "<<tmp.first<<endl<<endl;
        }
}
void command_02(int size, char *arr[]){
    cout<<"ALGORITHM MODE"<<endl;
    cout<<"Algorithm: "<<arr[2]<<endl;
    cout<<"Input size: "<<arr[3]<<endl<<endl;
    int num = atoi(arr[3]);
    if (arr[2] == "binary-insertion-sort" )
    {
        vector<long long> inputdata;
       
            cout<<"Input order: Randomize"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> bien_tam;
            inputdata = RandomData(bien_tam, num);   
            pair<long long, long long> tmp = Performance(inputdata, Binary_insetion_sort);
            cout_cmd(arr[4],tmp);
        
            cout<<"Input order: Nearly Sorted"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> bien_tam;
            inputdata = NsortedData(bien_tam, num);   
            pair<long long, long long> tmp = Performance(inputdata, Binary_insetion_sort);
            cout_cmd(arr[4],tmp);
        
            cout<<"Input order: Sorted"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> bien_tam;
            inputdata = SortedData(bien_tam, num);
            pair<long long, long long> tmp = Performance(inputdata, Binary_insetion_sort);
            cout_cmd(arr[4],tmp);

            cout<<"Input order: Reversed"<<endl;
            cout<<"------------------------------------"<<endl;
            vector<long long> bien_tam;
            inputdata = ReverseData(bien_tam, num);
            pair<long long, long long> tmp = Performance(inputdata, Binary_insetion_sort);
            cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "bubble-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, bubbleSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, bubbleSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, bubbleSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, bubbleSort);
        cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "counting-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, countSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, countSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, countSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, countSort);
        cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "flash-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, flashSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, flashSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, flashSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, flashSort);
        cout_cmd(arr[4],tmp);
        
    }


    else if (arr[2] == "heap-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, heapSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, heapSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, heapSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, heapSort);
        cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "insertion-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, insertionSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, insertionSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, insertionSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, insertionSort);
        cout_cmd(arr[4],tmp);
    }

    else if (arr[2] == "merge-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, MergeSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, MergeSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, MergeSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, MergeSort);
        cout_cmd(arr[4],tmp);

    }


    else if (arr[2] == "quick-sort" )
    {
        vector<long long> inputdata;
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, QuickSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, QuickSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, QuickSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, QuickSort);
        cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "radix-sort" )
    {
        vector<long long> inputdata;
       
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, radixSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, radixSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, radixSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, radixSort);
        cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "selection-sort" )
    {
        vector<long long> inputdata;
       
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, SelectionSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, SelectionSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, SelectionSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, SelectionSort);
        cout_cmd(arr[4],tmp);
    }


    else if (arr[2] == "shaker-sort" )
    {
        vector<long long> inputdata;
       
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, CocktailSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, CocktailSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, CocktailSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, CocktailSort);
        cout_cmd(arr[4],tmp);

    }


    else if (arr[2] == "shell-sort" )
    {
        vector<long long> inputdata;
       
        cout<<"Input order: Randomize"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = RandomData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, shellSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Nearly Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = NsortedData(bien_tam, num);   
        pair<long long, long long> tmp = Performance(inputdata, shellSort);
        cout_cmd(arr[4],tmp);
    
        cout<<"Input order: Sorted"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = SortedData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, shellSort);
        cout_cmd(arr[4],tmp);

        cout<<"Input order: Reversed"<<endl;
        cout<<"------------------------------------"<<endl;
        vector<long long> bien_tam;
        inputdata = ReverseData(bien_tam, num);
        pair<long long, long long> tmp = Performance(inputdata, shellSort);
        cout_cmd(arr[4],tmp);
    }
}