#include<iostream>
using  namespace std;
int main(){
    char button;
    cout<<"input a character: ";
    cin>>button;

    if(button == 'a'){
        cout<<"Hello"<<endl;
    }
    else if(button == 'b'){
        cout<<"Hazir"<<endl;

    }
    else if(button == 'c'){
        cout<<"hallo"<<endl;

    }
    else if(button == 'd'){
        cout<<"Ciao"<<endl;
    }
    else{
        cout<<"I'm Still learning a lot"<<endl;
    }
    return 0;
}