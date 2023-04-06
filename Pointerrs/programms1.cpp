#include<iostream>
using namespace std;
int main(){
    // POinters are used to store the addresses of variables



    int a = 10;
    int* aptr = &a;
    cout<<*aptr<<endl;

    *aptr = 20;
    cout<<a<<endl;




    return 0;
}