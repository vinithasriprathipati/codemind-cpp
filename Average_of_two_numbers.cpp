#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Average of "<<a<<" and "<<b<<" is: "<<fixed<<setprecision(2)<<(a+b)*0.5;
}