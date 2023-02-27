#include<iostream>
using namespace std;
int main(){
    int n ;
        cout << "Enter a positive integer: ";
        cin >> n;
    if( n % 2 == 0){
        cout<<"even"<<endl;
    } 
    else{
        cout<< "odd"<<endl;
    }
    return 0;
}