//Write a program that prints a multiplication table for numbers up to n.
#include<iostream>
using namespace std;
 
int main(){
    long n,pro=1;
    cout << "Enter a number : ";
    cin >> n;
    for(int i=1; i<=10; i++){
        cout << n << " X " << i << " = " << n*i <<endl; 
    }
}