//Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,…,n.
#include<iostream>
using namespace std;

int main(){
    int n, sum=1;
    string s;
    while(true){
        cout <<"Enter any number : ";
        cin >> n;
        cout<<"What do you want to perform sum or product? ";
        cin >> s;    
        if (s=="sum" || s=="s"){
            for(int i=2; i<=n ; i++){
                sum=sum+i;
            }
            cout << "Sum is = "<< sum;
            break;
        }
        else if(s=="product" || s=="p"){
            for(int i=1; i<=n; i++){
                sum=sum*i;
            }
            cout << "Product is = " << sum;
            break;
        }
        else{
            cout <<"Input is wrong!" << endl;
        }
    }    
}