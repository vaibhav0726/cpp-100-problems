//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
#include<iostream>
using namespace std;

int main(){
    int n, sum = 0 ;
    cout << "Enter a positive number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    cout << "sum from 1 to "<< n << " is : " << sum;
    
}