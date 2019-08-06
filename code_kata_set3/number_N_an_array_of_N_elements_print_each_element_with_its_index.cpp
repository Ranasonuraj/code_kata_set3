#include <iostream>
using namespace std;

int main()

{
    int count, *array;

    cin >> count;

    array = new int[count];

    for(int ind = 0; ind < count; ind++)
    {
        cin >> array[ind];
    }

    for(int ind = 0; ind < count-1; ind++)
    {
        cout << array[ind] << " " << ind << endl;
    }

    cout << array[count-1] << " " << count-1;

    return 0;


}
