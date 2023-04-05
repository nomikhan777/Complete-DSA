#include<iostream>
using namespace std;
int main(){
    int A[3][3] = {{1,2,3},{3,5,6},{6,7,8}};

    for (int i = 0; i<3; i++)
    {
        for (int j = i; j<3; j++)
        {
            // Swap code
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;

        }
        
    }
    
    // Print Code
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cout<<A[i][j]<<" ";

        }
        cout<<"\n";
        
    }
    


    return 0;
}