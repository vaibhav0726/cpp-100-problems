//Write a program that asks the user for their name and greets them with their name.

#include<iostream>
using namespace std;

int main()
{
    string name, last;
    cout << "Enter your first name : ";
    cin >> name;
    cout << "Enter your surname : ";
    cin >> last;
    cout << "Welcome " << name << " " << last << " " <<"Your name is really awesome";
}
