#include <iostream>
using namespace std;
int main()
{

    int pocketMoney = 3000;

    for (int date = 1; date <= 30; date++)
    {
        cout<<"Enter a date"<<endl;
        cin>>date;

        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketMoney == 0)
        {
            break;
        }

        cout << "go out today" << endl;
        pocketMoney = pocketMoney - 300;
    }
}