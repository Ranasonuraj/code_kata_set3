#include <iostream>
using namespace std;

int main()

{
    int startSequence, difference, termPosition;
    int endingVal, res;

    cin >> termPosition >> startSequence >> difference;

    endingVal = startSequence + ((termPosition-1)*difference) ;

    res = termPosition*(startSequence + endingVal);

    res /= 2;

    cout << res;

    return 0;
}
