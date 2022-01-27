#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n){
    int i, j ;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }

        }
    }
}
void selectionSort(int *arr, int n){
     int i, j;
    for (i = 0; i < n-1; i++){
        for( j = i + 1; j < n ; j++){
            if( arr[i] > arr[j]){      
                swap(&arr[i], &arr[j]);
            }
        }
    }

}
void insertionSort(int *arr  , int n){
    int i , key , j ;
    for(i = 1 ; i < n   ; i ++){
        key = arr[i];
        j = i - 1 ;
        while( j >= 0  && arr[j] > key ){
            arr[j + 1] = arr[j];
            j --;
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
    cout<<"Enter the no of elements"<<endl;
    cin >> n;
    cout<<"Enter the array elements"<<endl;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    do{
        cout<<"Choose the sorting technique want to implement"<<endl;
        cout<<"1. Insertion sort"<<endl;
        cout<<"2. Selection sort"<<endl;
        cout<<"3. Bubble sort"<<endl;
        cout<<"4. print Array "<<endl;
        cout<<"5. Exit "<<endl;
    int ch ;
    cin >> ch;
    switch (ch)
    {
    case 1:
        insertionSort(arr,n);
        break;
    
    case 2:
        selectionSort(arr,n);
        break;
    
    case 3:
        bubbleSort(arr,n);
        break;
    
    case 4:
        printarray(arr,n);
        cout<<endl;
        break;
    
    case 5:
        return 0;
        break;
    
    default:
        break;
    }
    }while(1);

    return 0;
    
}