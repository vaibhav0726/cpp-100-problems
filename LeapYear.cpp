// Write a program that prints the next 20 leap years for a given year.
#include<iostream>
using namespace std;

int main(){
    int year, count=0;
    cout << "Enter a year : ";
    cin >> year;
    cout<<"Next 20 leap years are : " << endl;
    do{
        if ((year % 400 == 0)|| (year % 4 == 0 && year % 100 != 0)){
            cout << year << " ";
            count++;
        }
        year = year + 1;
    } 
    while(count!=20);
}