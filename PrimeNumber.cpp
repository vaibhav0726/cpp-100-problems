//Write a program that prints all prime numbers upto n.
#include<iostream>
using namespace std;

int main(){
    long n;
    int isPrime=0;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Prime numbers are : ";
    for(long i = 2; i <= n; i++){
        isPrime = 0;
        for(long j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
           
        if(isPrime==0)
            cout << i << " ";
    }
    

}