// Write a function that returns the largest element in an array.
#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n, m;
    cout<< "How many elements do you want to give? ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<< endl;
    for(int i=0; i<n; i++){
        cin>>m;
        arr[i]=m;
    }
    cout<<"Largest element is : " << largest(arr , n);
}