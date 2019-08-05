#include <iostream>
using namespace std;

int main ()

{
    int arr[50], n, i, j;

    cin >> n;

    for (i = 0; i < n; i++)
        cin >> arr[i];

	for (i = 0; i < n; ++i)

	{
		for (j = 0; j < n-i-1; ++j)

		{
			if (arr[j] > arr[j+1])

			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}

	}


    for (i = 0; i < n; i++)
        cout <<arr[i] << " ";
    return 0;

}
