#include<bits/stdc++.h>
using namespace std ;

void swap(int *a , int *b){
    int temp = *a ;
    *a = *b;
    *b = temp;
}
int partition(int *arr, int l , int r){
    int pivot = arr[l];
    int i = l - 1;    
    for(int j = l; j < r ; j++){
        if(arr[j] < pivot){   
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}
void merge(int *arr, int l ,int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid ;
    int a[n1];
    int b[n2];
    for(int i = 0; i < n1; i++){
        a[i] = arr[l + i];
    }
    for(int i = 0; i < n2; i++){
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0; 
    int k = l;
    while(i < n1  && j < n2){
        if( a[i] < b[j]){
            arr[k] = a[i];
            k++,i++;
        }
        else{
            arr[k] = b[j];
            k++, j++;
        }
    }

    while(i < n1){
        arr[k] = a[i];
        k++,i++;
    }

    while(j < n2){
        arr[k] = b[j];
        k++, j++;
    }
}

void printarray(int *arr , int n){
     
     for(int i = 0 ; i < n ; i++){
         cout<<arr[i]<<" ";
     }
    
}
void quicksort(int *arr, int l , int r){
    if(l < r){
        int pi = partition(arr, l, r);
        quicksort(arr , l , pi - 1);
        quicksort(arr,pi + 1, r);
    }
}
void mergesort(int *arr, int l , int r){
    if(l < r){
        int mid = l + (r - l)/2 ;
        mergesort(arr, l , mid);
        mergesort(arr, mid + 1 , r);
        merge(arr,l, mid, r);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    printarray(arr, n);

    return 0;
}