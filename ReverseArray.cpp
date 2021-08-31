// Write function that reverses a array, preferably in place.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,90,30,80,40,50};
    int start=0, temp;
    int end=(sizeof(arr)/sizeof(arr[0]))-1;
    while (start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;  
        start++;
        end--;  
    }
    cout<<"\nReversed array with accurate preferably place are :";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i]<<" ";
    }    
}