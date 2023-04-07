#include<iostream>
using namespace std;


int main(){

    // STACK has fixed size 
    // Heap has not fix size and we can arrange its size like virtual memory in computer
    // New operator is used to allocate memory in heap

    // In stack system allocates memory automatically and deallocates in same way
    // in heap and as we know it is also dynamic method to allocate memory so we have  to allocate memory manually 
    // and deallocates it same way
    // DELETE() operator is used deallocate the memory in heap

    // Dangling pointer is created when  delete() operator delete the  memory and we say it dangling because
    //  it is pointing towards a memory allocation where no value is stored but just the address

    // If memory is not deallocated from the Heap then it will result in memory leakage
    // memory leakge is a serious issue  in servers






    return 0;
}