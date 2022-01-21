#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}
void selectionSort(int *arr, int n){
     int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }

}
void insertionSort(int *arr  , int n){

   
    int i , key , j ;
    for(i = 1 ; i < n   ; i ++){
        key = arr[i];
        j = i - 1 ;
        while( j >= 0  && arr[j] > key ){
            arr[j + 1] = arr[j];
            j = j  - 1;
        }
        arr[j + 1] = key ;

    }  
}
void printarray(int *arr , int n){
     
     for(int i = 0 ; i < n ; i++){
         cout<<arr[i]<<" ";
     }
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    //insertionSort(arr, n);
    selectionSort(arr, n);
    printarray(arr , n);


    
}