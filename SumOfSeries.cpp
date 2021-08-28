// Write Java program to find the sum of the given series:
// 1 + (1*2) + (1*2*3) + ………. + (1*2*3* …… * n)
#include<iostream>
using namespace std;

int main(){
    int n, sum=0, pro=1;
    cout << "Enter a number : ";
    cin>>n;
    for (int i = 1; i<=n; i++)      {
        pro = 1;
        for (int j = 1; j<=i; j++)
        {
            pro = pro * j;
        }
        sum = sum + pro;        
    }
    cout<< "The Sum is : " << sum;
    
}