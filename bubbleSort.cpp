//
//  main.cpp
//  bubbleSort_test
//
//  Created by MacBook on 2017/11/12.
//  Copyright © 2017年 xiang wangK. All rights reserved.
//

#include <iostream>

void bubbleSort(int sortedList[], int n){
    int k,i;
    int temp = 0;

    for(k=0; k<n; k++){
        for(i=0; i<n; i++){
            if(sortedList[i] > sortedList[i+1]){
                temp = sortedList[i+1];
                sortedList[i+1] = sortedList[i];
                sortedList[i] = temp;
            }
            
        }
        
    }
    
}

int main(int argc, const char * argv[]) {
    
    int S[11] = {9,6,3,4,5,33,5,23,67,8,9};
    bubbleSort(S, 10);
    // insert code here...
    std::cout << "Hello, World!\n"<< S[10] <<"\n";
    return 0;
}
