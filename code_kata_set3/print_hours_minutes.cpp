#include <iostream>
using namespace std;

int main ()

{
    int hrs, minute;
    cin >> minute;
    hrs= minute*0.016667;
    minute=minute%60;

    cout << "\n" << hrs << " " << minute ;

}
