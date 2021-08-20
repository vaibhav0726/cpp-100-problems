//Modify the second program such that only the users Vaibhav and Varshney are greeted with their names.
#include<iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name : ";
    cin >> name;
    if( name =="Vaibhav" || name == "Varshney" ){
        cout << "Welcome " << name <<" Your name is really awesome";
    }  
}