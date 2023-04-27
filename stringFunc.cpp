#include<iostream>
#include<string>
#include<algorithm>
#include<cctype> // Include the <cctype> header file for toupper function
using namespace std;

int main(){

    string s = "adsjhabhdgd";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
    return 0;
}
