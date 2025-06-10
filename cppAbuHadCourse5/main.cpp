//
//  main.cpp
//  cppAbuHadCourse5
//
//  Created by Emad Sul on 14/12/1446 AH.
//

#include <iostream>
using namespace std;

int RandomNumber(int From , int To)
{
    int RandNum=rand()%(To-From+1)+From;
    return RandNum;
}

void FillArrayithRandomNumbers(int arr[100],int &arrLength){
    cout<<"number of elements ? ";
    cin>>arrLength;
    for (int i=0; i<arrLength;i++){
        arr[i]=RandomNumber(1,100);
        
    }
    
}
void PrintArray(int arr[100], int arrLength){
    for (int i=0; i<arrLength;i++){
        
        cout<<arr[i]<<" ";
    }
    
    
}
void AddArrayElement(int Num, int arr[100],int &arrLength){
    arrLength++;
    arr[arrLength-1]=Num;
}

void CopyArray(int arr[100], int arr2[100],int arrLength,int &arrLength2){
    for (int i=0; i<arrLength;i++){
        
        AddArrayElement(arr[i],arr2, arrLength2);
    }
}

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength=0;
    FillArrayithRandomNumbers(arr, arrLength);
    int arr2[100];
    int arrLength2=0;
    CopyArray(arr,arr2, arrLength,arrLength2);
    cout<<"\narray elements 'before' being copied: \n";
    PrintArray(arr,arrLength);
    cout<<"\narray elements 'after' being copied: \n";
    PrintArray(arr2, arrLength2);
    return 0;
}
